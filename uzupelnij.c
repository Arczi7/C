#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ZADANIE TYPU UZUPE£NIJ

struct Auto
{
    char *model;
    int liczba_silnikow;
};

struct Auto foo(int n, struct Auto tab[])
{
    float najwiecej_zn=0;
    int index_najw=0;
    for(int i=1; i<n; i++)
    {
        if(strlen(tab[i].model) > najwiecej_zn)
        {
            index_najw=1;
        }
    }
    return tab[index_najw];
};

int main()
{
    //PRZYK£ADOWE ROZWI¥ZANIE
    struct Auto a1 = {"FIAT", 1};
    struct Auto a2 = {"FORD", 2};
    struct Auto a3 = {"FERRARI", 3};
    struct Auto tab1[3] = {a1,a2,a3};
    struct Auto wynik = foo(3, tab1);
    return 0;
}
