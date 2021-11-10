#include <stdio.h>

int main()
{
    int num, fat=1;
    printf("calcula o fatorial de um numero\n");
    printf("informe o numero: ");
    scanf("%d",&num);
    for(int i=num;  i>=1;  i--)
        fat *= i;
    printf("o fatorial de %d e %d",num,fat);

    return 0;
}
