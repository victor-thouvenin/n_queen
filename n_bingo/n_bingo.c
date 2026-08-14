int check_cell(int tab[], int i, int j, int n)
{
    int l = 1;
    int c = 1;
    int d1 = 1;
    int d2 = 1;

    for (int k = 0; k < n; k++) {
        l &= tab[i*n + k]&1;
        c &= tab[k*n + j]&1;
        d1 &= (i == j ? tab[k*n + k]&1 : 0);
        d2 &= (i == n-1-j ? tab[k*n + n-1-k]&1 : 0);
        if (!l && !c && !d1 && !d2)
            break;
    }
    return (l || c || d1 || d2);
}

int check_map(int tab[], int i, int j, int n)
{
    int max = 0;

    tab[i*n + j]++;
    if (check_cell(tab, i, j, n))
        return (max);
    
    return (max);
}

int count_max_points(int n)
{
    int tab[n * n];
    int i = 0;

    if (n <= 0)
        return (0);
    
    while (i < n*n) {
        tab[i++] = 0;
    }
    return check_map(tab, 0, 0, n);
}

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char** av)
{
    if (ac < 2) {
        return 1;
    }
    printf("%i\n", count_max_points(atoi(av[1])));
    return 0;
};