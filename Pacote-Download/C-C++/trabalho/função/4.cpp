#include <stdio.h>

int divisores(int num);
int main()
{
  int num;
  printf("\ndigite um numero: ");
  scanf("%d",&num);
  printf("\na quantidade de divisores e: %d",divisores(num));

}

 int divisores(int num)
 {
     int cont=0 ;
     for(int i=1; i<=num;i++)
     {
        if(num %i==0 )
        {
            cont++;
        }
     }
     return cont;
 }

