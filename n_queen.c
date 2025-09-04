/*
** EPITECH PROJECT, 2018
** count_valid_queens_placements.c
** File description:
** count valid queens placements
*/

void print_map(int tab[], int n);

void set_tab(int tab[], int i, int j, int n)
{
    int i2 = i;
    int d;
    int k = tab[i * n + j] == 0 ? 1 : -1;
    int *t;

    tab[i * n + j] += k;
    while (++i2 < n) {
        t = tab + i2 * n;
        t[j] -= k;
        d = i2 - i;
        if (d <= j)
            t[j - d] -= k;
        if (j + d < n)
            t[j + d] -= k;
    }
}

int check_map(int tab[], int i, int j, int n)
{
    int q = 0;

    if (i >= n)
        return (1);
    if (j >= n)
        return (q);
    else {
        if (tab[i * n + j] > -1) {
            set_tab(tab, i, j, n);
            q += check_map(tab, i + 1, 0, n);
            set_tab(tab, i, j, n);
        }
        q += check_map(tab, i, j + 1, n);
    }
    return (q);
}

int count_valid_queens_placements(int n)
{
    int tab[n * n];
    int i = 0;

    if (n <= 0)
        return (0);
    
    while (i < n*n) {
        tab[i++] = 0;
    }
    return (check_map(tab, 0, 0, n));
}
