#include <stdio.h>
#define MAXELLEM 30

int main(void)
{
    int A[MAXELLEM], n, i, temp;

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

    temp = A[0];
    i = 0;
    while (i < n - 1) // Addig megy még nem jut el a tömb utolsó elöti eleméig
    {
        A[i] = A[i + 1]; // A tömb elemet áthelyezi egy index-el visza pl ( A[0] = 4, A[1] = 6, A[2] = 5 => A[0] = 6, A[1] = 5, A[2] = 5)
        i++;
    }
    A[i] = temp;

    // Tömb elemeinek ki írása
    for (i = 0; i < n; i++)
        printf("\nA tömb %d eleme %d.", i + 1, A[i]);
}
