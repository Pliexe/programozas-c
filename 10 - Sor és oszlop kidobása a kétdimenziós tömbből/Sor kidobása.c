#include <stdio.h>
#define MAXSOR 10
#define MAXOSZLOP 10

int main()
{
        int A[MAXSOR][MAXOSZLOP], n, m, i, j, p;

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
                printf("Kérem a sor számát amelyiket ki kell dobni: ");
                scanf("%d", &p);
        } while (p <= 0 && p > n);

        if (p == n)
                n--;
        else
        {
                for (i = 0; i < n; i++)
                        for (j = 0; j < m; j++)
                                A[i][j] = A[i + 1][j];
                n--;
        }

        for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                        printf("\nA[%d][%d] = %d", i + 1, j + 1, A[i][j]);

        return 0;
}
