#include <stdio.h>
#define MAXELLEM 30

int main(void)
{
    int A[MAXELLEM], n, i, kereszet;

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

    printf("Kérem a kereszet elemet: ");
    scanf("%d", &kereszet);

    i = 0;
    while (i < n)
    {
        if (kereszet == A[i])
        {
            printf("\nA kereszet elem (%d), %d helyen van.", A[i], i + 1);
            getch();
            return 0;
        }
        else
            i++;
    }

    printf("\nIlyen elem nincs a tömbben!");
}