#include <stdio.h>
#include <stdlib.h>
#include "tombfel.h"



int main(void)
{
    int *A=NULL,*B=NULL,*C=NULL,n,m;

    do
    {
        printf("Kerem a sorok szamat: ");
        scanf("%d", &n);
    } while(n <= 0);

    do
    {
        printf("Kerem a oszlopok szamat: ");
        scanf("%d", &m);
    } while(m <= 0);
    A=deklaracio(n, m);
    B=deklaracio(n, m);
    C=deklaracio(n, m);
    lenulazas(A, n, m);
    lenulazas(B, n, m);
    lenulazas(C, n, m);
    beolvasas(A, n, m);
    beolvasas(B, n, m);
    osszeg(A, B, C, n, m);
    kiiras(C, n, m);
    free(A);
    free(B);
    free(C);

    return 0;
}


