#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *A, n, i;

    do
    {
        printf("Kerem a tomb elemeinek szamat: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 0; i < n; i++)
        if ((A = (int *)malloc(n * sizeof(int))) == NULL)
        {
            printf("Nincs eleg memoria");
            return 0;
        }

    for (i = 0; i < n; i++)
        *(A + i) = 0;

    for (i = 0; i < n; i++)
    {
        printf("Kerem a tomb %d elemet", i + 1);
        scanf("%d", (A + i));
    }

    for (i = 0; i < n; i++)
        printf("\nA[%d] = %d", i + 1, *(A + i));

    return 0;
}