#include <stdio.h>
#include <stdlib.h>

//LISTA BEZ G£OWY - USUWANIE

struct element
{
    int i;
    struct element * next;
};

struct element* usun(struct element* lista, int a)
{
    if (lista == NULL) //jeżeli lista jest pusta
        return lista;
    struct element *wsk, *wsk2;
    wsk=lista;
    if(lista->i==a)
    {
        lista=lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next!=NULL) && (wsk->next->i !=a))
        {
            wsk=wsk->next;
        }
        if(wsk->next !=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
        }
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
    struct element* lista2 = malloc(sizeof(struct element));
    lista2->i=2;
    lista2->next=malloc(sizeof(struct element));
    lista2->next->i=5;
    lista2->next->next=NULL;
    wyswietlListeBezGlowy(lista2);
    lista2=usun(lista2,2);
    wyswietlListeBezGlowy(lista2);
    return 0;
}
