#include <stdio.h>
#include <stdbool.h>
#define MAXSOR 10
#define MAXOSZLOP 10

int main()
{
    int A[MAXSOR][MAXOSZLOP], n, m, i, j, kereszett;
    bool ok;

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
    ok = false;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (A[i][j] == kereszett)
                ok = true;

    printf(ok ? "A tömbben van ilyen elem." : "Ilyen elem nincs a tömbben.");

    return 0;
}