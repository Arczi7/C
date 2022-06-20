#include <stdio.h>
#include <stdlib.h>

//LISTA BEZ G£OWY - DODAWANIE NA KONIEC

struct element
{
    int i;
    struct element * next;
};

struct element * dodajk(struct element* lista, int a)
{
    struct element * wsk;
    if(lista==NULL) // pusta lista
    {
        wsk=malloc(sizeof(struct element));
        wsk->i=a;
        wsk->next=NULL;
        lista=wsk; // wyrzucamy listê
    }
    else
    {
        wsk=lista;
        while(wsk->next!=NULL) // czy nastêpnik jest ró¿ny od nulla
        {
            wsk = wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
        wsk->i=a;
        wsk->next=NULL;
    }
    return lista;
};

void wyswietlListeBezGlowy(struct element* Lista)
{
    struct element* temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta!\n");
    }
    while(temp!=NULL)
    {
        printf("%d \n", temp->i);
        temp=temp->next;
    }
    printf("---\n");
}

int main()
{
    struct element* lista1 = NULL; //pusta lista
    wyswietlListeBezGlowy(lista1);
    lista1=dodajk(lista1,7); //dodawanie do listy
    lista1=dodajk(lista1,5); //dodawanie do listy
    wyswietlListeBezGlowy(lista1);
    return 0;
}
