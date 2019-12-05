#include <stdio.h>
#define MAXSOR 10
#define MAXOSZLOP 10

int main()
{
    int A[MAXSOR][MAXOSZLOP], n, m, i, j, q;

    do
    {
        printf("Kerem a sorok szamat: ");
        scanf("%d", &n);
    } while (n <= 0);

    do
    {
        printf("Kerem az oszlopok szamat: ");
        scanf("%d", &m);
    } while (m <= 0);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            A[i][j] = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            printf("Kérem a tömb A[%d][%d] eleme értékét: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }

    // --------------------------

    do
    {
        printf("Kérem a oszlop számát amelyiket ki kell dobni: ");
        scanf("%d", &q);
    } while (q <= 0 && q > m);

    if (q == m)
        m--;
    else
    {
        for (j = q - 1; j < m; j++)
            for (i = 0; i < n; i++)
                A[i][j] = A[i][j + 1];
        m--;
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            printf("\nA[%d][%d] = %d", i + 1, j + 1, A[i][j]);

    return 0;
}
