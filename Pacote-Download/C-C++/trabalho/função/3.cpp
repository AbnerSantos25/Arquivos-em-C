#include <stdio.h>

int fib(int num);

int main(){

int pos ;

    printf("digite um numero para calcular na sequencia fibonacci: \n");
    scanf("%d", &pos);
    printf("O %d termo da sequencia de fibonacci eh %d",pos,fib(pos));

return 0;
}

int fib(int num)
{

    if((num == 1) || (num == 2))
    return 1;
    else
    return fib(num-1) + fib(num-2);
}
