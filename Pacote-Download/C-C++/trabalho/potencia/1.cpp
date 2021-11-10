#include <stdio.h>
#include "potencia.h"

int main(void)
{
int base, expo, result;
double p;
printf("Digite o numero para a base: ");
scanf("%d",&base);
printf("Digite o numero para o expoente inteiro maior ou igual a 0: ");
scanf("%d",&expo);
p= potencia(result);
printf("Potencia de %d elevado a %d = %.0lf",result);
getch();
return 0;
}
double fatorial(int n)
{
double vfat;
if (n <= 1){
return (1);
}else
{
vfat = n * fatorial(n - 1);
return (vfat);
}
}
