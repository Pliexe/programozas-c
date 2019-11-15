#include <stdio.h>
#define MAXELLEM 30

int main(void)
{
    int A[MAXELLEM], n, i, j, temp;

    // ----------------
    // Тömb deklarálása
    // ----------------

    // Lenullázás
    for (i = 0; i < MAXELLEM; i++) // Át megy mindegyik tömb elemén
        A[i] = 0;                  // Lenulláza a tömb elemeit

    // n - vagy is tömb elemeinek száma meghatározása
    do
    {
        printf("Kérem a tömb elemeinek számát: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Tömb elemeinek megadása
    for (i = 0; i < n; i++)
    {
        printf("Kerem a tömb %d elemét: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }

    // Tömb elemeinek ki írása
    for (i = 0; i < n; i++)
        printf("\nA tömb %d eleme %d.", i + 1, A[i]);
}