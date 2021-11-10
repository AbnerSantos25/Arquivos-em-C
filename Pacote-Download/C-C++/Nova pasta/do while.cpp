#include <stdio.h>
#include <conio.h>
int main ()
{
    char parar;


    do
    {
        printf("\nquer parar a repeticao? (S/N) : ");
        parar=getche();

    }while(parar!='s' && parar!='S');
    printf("\nacabou...");

    return 0;
}
