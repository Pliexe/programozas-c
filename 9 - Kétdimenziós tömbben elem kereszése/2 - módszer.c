#include <stdio.h>
#include <stdbool.h>
#define MAXSOR 10
#define MAXOSZLOP 10

int main(void)
{
    int A[MAXSOR][MAXOSZLOP], n, m, i, j, kereszett;

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

    printf("\nKérem a kereszett elemet: ");
    scanf("%d", &kereszett);
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if (A[i][j] == kereszett)
            {
                printf("A kereszett elem A[%d][%d]", i + 1, j + 1);
                return 0;
            }
            else
                j++;
        }
        i++;
    }

    printf("Ilyen elem nincs a tömbben.");

    return 0;
}
