#include <stdio.h>
#define MAXSOR 10
#define MAXOSZLOP 10

int main(void)
{
    int A[MAXSOR][MAXOSZLOP], n, m, i, j, S;

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

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            printf("\nA[%d][%d] = %d", i + 1, j + 1, A[i][j]);

    for (i = 0; i < n; i++)
    {
        S = 0;
        for (j = 0; j < m; j++)
        {
            S += A[i][j];
            printf("\nA(z) %d sor ősszege %d", i, S);
        }
    }

    return 0;
}