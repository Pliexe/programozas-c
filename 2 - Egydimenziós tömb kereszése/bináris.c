#include <stdio.h>
#define MAXELLEM 30

int main(void)
{
    int A[MAXELLEM], n, i, kereszet, folso, also, fele;

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

    folso = n - 1;
    also = 0;

    while (also < folso)
    {
        fele = (also + folso) / 2;
        if (kereszet == A[fele]) // Ha kereszet elem egyezik a tomb[fele] (pl. n = 5, A[fete] less A[2] mivel (4 + 0) / 2 az 2 de a ertek valtozik atol fugve hogy melyik fele van a kereszet ertek)
        {
            printf("\nA kereszet elem %d", fele + 1);
            getch();
            return 0;
        }
        if (kereszet < A[fele])
            folso = fele - 1;
        else
            also = fele + 1;
    }

    printf("Ilyen elem nincs!");

    return 0;
}