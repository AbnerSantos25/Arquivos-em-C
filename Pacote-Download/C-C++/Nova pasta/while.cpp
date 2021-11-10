#include <stdio.h>
#include <conio.h>
int main ()
{
    char parar;
    parar = 'n';
    while(parar!='s' && parar!='S')
    {
        printf("\nquer parar a repeticao? (S/N) : ");
        parar=getche();
    }
    printf("\nacabou...");
    return 0;
}
