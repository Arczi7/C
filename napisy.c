#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int dlugoscwskaznikowo(char *napis)
{
    int i=0;
    while(napis[i])
    {
        i++;
    }
    return i;
}

int porownaj(char napis1[], char napis2[])
{
    int d1 = dlugosc(napis1);
    int d2 = dlugosc(napis2);
    if(d1!=d2) //bramka sprawdzajaca czy dlugosc jest taka sama
        return 0; //nie sa takie same
    for( int i=0; i<d1; i++)
    {
        if(napis1[i]!=napis2[i]) //sprawdzanie znak po znaku napis1 = napis2
        {
            return 0; //nie sa takie same
        }
    }
    return 1; //sa takie same
}

void sklej(char napis1[], char napis2[], char napis3[]) //skleja dwa napisy w trzecim charze
{
    int i,j;
    for(i=0; napis1[i]!=0;i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0;napis2[j]!=0;j++)
    {
        napis3[j+i]=napis2[j];
    }
    napis3[i+j]=0; //znak koñca
}

int main()
{
    printf("Dlugosc napisu: %d \n", dlugosc("test"));
    printf("Dlugosc napisu: %d \n", dlugoscwskaznikowo("test"));
    printf("Czy dwa napisy sa takie same: %d\n", porownaj("test", "abc"));
    char n1[]="Ala m";
    char n2[]="a kota.";
    char n3[20]="";
    sklej(n1,n2,n3);
    printf("%s \n",n3);
    return 0;
}
