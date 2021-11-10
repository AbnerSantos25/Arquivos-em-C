#include <stdio.h>

int main()
{
    int ano, idade;

    printf("programa que mostra a idade da pessoa no final deste ano\n");
    printf("\ninfome seu ano de nascimento: ");
    scanf("%d", &ano);//&<< só aparece aqui no scanf
    idade = 2021 - ano;
    printf("\na idade da pessoa no final deste ano sera %d anos",idade);
    return 0;
}
