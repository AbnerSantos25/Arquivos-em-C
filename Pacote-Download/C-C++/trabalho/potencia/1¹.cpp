#include <stdio.h>
#include "potencia.h"

int main(void)
{
    int x,y,pot=1;
    double p;
    printf("calcular pontencia de x elevado a y\n");
    printf("digite o valor de X : ");
    scanf("%d",&x);
    printf("digite o valor de Y : ");
    fflush(stdin);
    scanf("%d",&y);

    for(int i=0; i<y; i++)
    {
        pot *= x;
    }

    printf("\n %d elevado a %d = %d",x,y,pot);

    return 0;
}
