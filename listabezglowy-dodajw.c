#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};


struct element* dodajw(struct element*Lista, struct element*elem, int a)
{
    struct element*wsk=malloc(sizeof(struct element));
    wsk->i=a;
    if (elem == NULL)
    {
        wsk->next=Lista;
        Lista=wsk;
    }
    else
    {
        wsk->next=elem->next;
        elem->next=wsk;
    }
    return Lista;
};

struct element*znajdz(struct element*Lista, int a)
{
    while((Lista!=NULL)&&(Lista->i!=a))
    {
        Lista=Lista->next;
    }
    return Lista;
};

void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}

int main()
{
    struct element * lista=malloc(sizeof(struct element));
    lista->i=5;
    lista->next=malloc(sizeof(struct element));
    lista->next->i =-4;
    lista->next->next=NULL;
    wyswietlListeBezGlowy(lista);
    lista=dodajw(lista, NULL, 8);
    wyswietlListeBezGlowy(lista);
    printf("%p\n",znajdz(lista,8));
    return 0;
}
