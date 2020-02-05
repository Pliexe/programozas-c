#define Tomb_Feldolgozasa

int * deklaracio(int n, int m);
void lenulazas(int * x, int n, int m);
void beolvasas(int * x, int n, int m);
void kiiras(int * x, int n, int m);
void osszeg(int * x, int * y, int * z, int n, int m);

int * deklaracio(n, m)
{
    int *X=NULL;
    if((X=(int*)calloc((n * m), sizeof(int))) == NULL)
    {
        printf("\nNincs eleg memoria");
        return NULL;
    }
    else
        return X;
}

void lenulazas(int *X, int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            *(X+i*m+j)=0;
}

void kiiras(int *X, int n, int m)
{
    int i,j;
    printf("\nA tomb elemei");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            printf("\nA[%d][%d]=%d", i+1, j+1, *(X+i*m+j));
}

void beolvasas(int *X, int n, int m)
{
    int i,j;
    printf("Kerem a tomb elemeit\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            {
                printf("\nA[%d][%d]: ", i+1, j+1);
                scanf("%d", X+i*m+j);
            }
}

void osszeg(int *X, int *Y, int *Z, int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j < m; j++)
            *(Z+i*m+j)=(*(X+i*m+j))+(*(Y+i*m+j));
}

