#include <stdio.h>
#include <stdlib.h>

//LISTA Z G£OWA 

struct element
{
    int i;
    struct element * next;
};

void dodajk(struct element* lista, int a) //DODAWANIE NA KONIEC
{
    struct element* wsk=lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    wsk->i=a;
    wsk->next=NULL;
};

void wyczysc(struct element * Lista) // CZYSZCZENIE
{
    struct element * wsk=Lista->next;
    struct element * wsk2=Lista;
    Lista=wsk;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
    wsk2->next=NULL; 
}

void wyswietlListeZGlowa(struct element* Lista)
{
    struct element* temp=Lista->next;
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
    struct element* lista1 = malloc(sizeof(struct element));
    lista1->next=NULL;
    wyswietlListeZGlowa(lista1); // pusta lista
    dodajk(lista1, 8);
    dodajk(lista1, -4);
    wyswietlListeZGlowa(lista1);
    //INACZEJ
    struct element* lista2 = malloc(sizeof(struct element));
    lista2->next=malloc(sizeof(struct element));
    lista2->next->i=4;
    lista2->next->next=malloc(sizeof(struct element));
    lista2->next->next->i=7;
    lista2->next->next->next=NULL; //znak stopu umowny
    wyswietlListeZGlowa(lista2);
    dodajk(lista2, 8);
    wyswietlListeZGlowa(lista2);
    return 0;
}
