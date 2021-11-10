#include <stdio.h>

void leia(int n);
int main()
{
    int n, result;
    printf("Digite um numero: ");
    scanf("%d",&n);
    leia(n);
    return 0;
}
void leia(int n)
{
    int soma;
    for(int i = 0; i <= n; i++){
        soma= i +1/n;
        printf("%d/%d",soma,n);
    }
}
