#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, m, *A;
    A = NULL;
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
            if ((A = (int *)malloc(sizeof(int))) == NULL)
            {
                printf("Nincs eleg memoria");
                return 0;
            }

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            printf("Kerem az A[%d][%d] elemet: ", i, j);
            scanf("%d", A + i * m + j);
        }

    printf("\nA tomb elemei: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            printf("\n - A tomb eleme A[%d][%d] = %d", i, j, *(A + i * m + j));

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            free(A + i * m + j);

    return 0;
}
