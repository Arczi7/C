#include <stdio.h>
#include <stdlib.h>

struct Pociag{
    char *model;
    int liczba_wagonow;
    int liczba_pasazerow;
};

int funkcja(struct Pociag tab[], int rozmiar)
{
    int liczba_pas=0;
    for(int i=0; i<rozmiar; i++)
    {
        liczba_pas+=tab[i].liczba_pasazerow;
    }
    return liczba_pas;
}

int main()
{
    struct Pociag p1 = {"model1", 2, 20};
    struct Pociag p2 = {"model2", 3, 10};
    struct Pociag p3 = {"model2", 1, 15};
    struct Pociag tab[] = {p1,p2,p3};
    printf("Suma pasazerow to: %d",funkcja(tab,3));
    return 0;
}
