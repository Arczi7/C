#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
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
    printf("%p\n",znajdz(lista,-4));
    return 0;
}
