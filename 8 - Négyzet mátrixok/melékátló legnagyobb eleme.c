#include <stdio.h>
#define MAXSOR 10
#define MAXOSZLOP 10

int main()
{
    int A[MAXSOR][MAXOSZLOP], n, i, j, MAX;

    do
    {
        printf("Kerem a sorok szamat: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            A[i][j] = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Kérem a tömb A[%d][%d] eleme értékét: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }

    MAX = A[n - 1][0];
    for (i = n - 2; i > 0; i--)
        for (j = 0; j < n; j++)
            if ((i + j) == (n - 1))
                if (A[i][j] > MAX)
                    MAX = A[i][j];

    printf("\nA melékátló legnagyobb elemet: %d\n", MAX);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            printf("\nA[%d][%d] = %d", i + 1, j + 1, A[i][j]);

    return 0;
}