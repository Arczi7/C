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

    return 0;
}
