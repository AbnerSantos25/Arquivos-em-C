#include <stdio.h>
#include <conio.h>

int potencia(int x, int y)
{
    int pot=1;

     for(int i=0; i<y; i++)
    {
        pot*=x;
    }
    return(pot);
}


int main(void)
{
    int x, y, pot=1;
    printf("calcular pontencia de x elevado a y\n");
    printf("digite o valor de X : ");
    scanf("%d",&x);
    printf("digite o valor de Y : ");
    scanf("%d",&y);


    pot=potencia(x,y);

    printf("\n %d elevado a %d = %d",x,y,pot);

    getch();
    return 0;
}

