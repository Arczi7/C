#include <stdio.h>
#include <stdlib.h>
//ZADANIA Z NAG£ÓWKIEM

//int char char * * * ( ) napis1 napis2 , foo

int* foo(char* napis1, char* napis2)
{
    return NULL;
}

//fun void int int char n m tab [] ) ( , , * **

void fun(int** tab, char* n, int m[])
{
    printf("test");
}

//void int int int int ( ) ( ) ( ) * , , fun a b n wsk

void fun2(int (*wsk) (int a, int b), int n)
{
    printf("test");   
}

int funkcja(int a, int b)
{
    return 5;
}

int main()
{
    //PIERWSZY NAG£ÓWEK
    char* a = "test";
    char* b = "abc";
    printf("%p\n", foo(a,b));

    //DRUGI NAG£ÓWEK
    int** tab1=NULL;
    char *n1="ABC";
    int tab2[]={3};
    fun(tab1, n1, tab2);
    
    //TRZECI NAGŁÓWEK
    fun2(funkcja, 60);
    return 0;
}
