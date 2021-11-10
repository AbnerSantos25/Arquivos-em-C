#include <stdio.h>

int soma(int n);
int main ()
{
 int n, res;
printf("informe um número: ");
scanf("%d", &n);
res=soma(n);
printf("%d", res);
return 0;
}

int soma(int n)
{
   if(n<=0){
      return n=0;
}else
{
return n+soma(n-1);

}
}
