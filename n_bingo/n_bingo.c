int check_cell(int tab[], int i, int j, int n)
{
    int l = 1;
    int c = 1;
    int d1 = 1;
    int d2 = 1;
    int k = 0;

    while (k < n) {
        l = l && tab[i*n + k];
        c = c && tab[k*n + j];
        d1 = d1 && (i == j ? tab[k*n + k]&1 : 0);
        d2 = d2 && (i == n-1-j ? tab[k*n + n-1-k]&1 : 0);
        if (!l && !c && !d1 && !d2)
            break;
        ++k;
    }
    return (l || c || d1 || d2);
}

int check_map(int tab[], int i, int n, int scr)
{
    static int max = 0;

    ++tab[i];
    if (!check_cell(tab, i/n, i%n, n)) {
        ++scr;
        if (scr > max)
           ++max;
        if (i+1 < n*n)
            check_map(tab, i+1, n, scr);
        --scr;
    }
    --tab[i++];

    if (i >= n*n || n*n -i < max-scr || (n*n -i == max-scr && max-scr >= 3)) {
        return (max);
    }
    return (check_map(tab, i, n, scr));
}

int count_max_points(int n)
{
    int tab[n * n];
    int i = 0;

    while (i < n*n) {
        tab[i++] = 0;
    }
    return check_map(tab, 0, n, 0);
}

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char** av)
{
    if (ac < 2) {
        return 1;
    }
    int n = atoi(av[1]);
    if (n < 1 || n > 100)
        return 1;
    printf("%i\n", count_max_points(n));
    return 0;
};