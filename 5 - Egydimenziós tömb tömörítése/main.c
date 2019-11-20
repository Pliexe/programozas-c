#include <stdio.h>
#define MAXELLEM 30

int main(void)
{
    int A[MAXELLEM], n, i, kidobni, j;

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

    printf("Kérem a kidobás szánt elemet: ");
    scanf("%d", &kidobni);
    i = 0;
    while (i < n)
    {
        while (A[i] != kidobni)
            i++;

        if (i < n - 1)
        {
            for (j = i + 1; j < n; j++)
                A[j - 1] = A[j];
            A[n - 1] = 0;
            n--;
        }
        else
        {
            if (i == n - 1)
            {
                A[n - 1] = 0;
                n--;
            }
        }
    }

    // Tömb elemeinek ki írása
    for (i = 0; i < n; i++)
        printf("\nA tömb %d eleme %d.", i + 1, A[i]);
}
