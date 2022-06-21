#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m) //wypisanie tablicy tablic
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d %d] = %d ", i,j,tab[i][j]);
        }
        printf("\n");
    }
}

void foo2(int **tab, int n, int m) //wypisanie tablicy tablic wierszy w kolumnach - pseudo-transpozycja
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("[%d %d] = %d ", j,i,tab[j][i]);
        }
        printf("\n");
    }
}


void zamiana(int** tab1, int** tab2, int n, int m) //zamienia wartosci z jednej tablicy do drugiej i na odwrot
{
    int temp[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m;j++)
        {
            temp[i][j] = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp[i][j];
        }
    }
}

int main()
{
    int **tab = malloc(2*sizeof(int));
    *tab = malloc(3*sizeof(int));
    *(tab+1)=malloc(3*sizeof(int));
    **tab=2; //0,0
    *(*tab+1)=3; //0,1
    *(*tab+2)=-2; //0,2
    *(*(tab+1))=9; //1,0
    *(*(tab+1)+1)=-4; // 1,1
    *(*(tab+1)+2)=7; // 1,2
    printf("\nTAB 1\n");
    foo2(tab,2,3);
    printf("\nTAB 2\n");
    int **tab2 = malloc(2*sizeof(int));
    *tab2 = malloc(3*sizeof(int));
    *(tab2+1)=malloc(3*sizeof(int));
    **tab2=8; //0,0
    *(*tab2+1)=5; //0,1
    *(*tab2+2)=3; //0,2
    *(*(tab2+1))=10; //1,0
    *(*(tab2+1)+1)=2; // 1,1
    *(*(tab2+1)+2)=4; // 1,2
    foo2(tab2,2,3);
    printf("\n");
    zamiana(tab,tab2,2,3);
    printf("\nTAB 1\n");
    foo2(tab,2,3);
    printf("\nTAB 2\n");
    foo2(tab2,2,3);
    return 0;
}
