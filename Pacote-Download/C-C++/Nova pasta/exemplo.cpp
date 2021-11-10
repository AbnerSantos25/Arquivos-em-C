#include <stdio.h>

int main ()
{
    char num, num2;
    printf("Ler uma letra e mostrar qual numero foi lido \n");
    printf("informe uma letra: ");
    scanf("%c",&num);
    printf("informe a letra 2: ");
    fflush(stdin);// colocar antes de qlqr leitura de caracteres (limpa o buffer)
    scanf("%c",&num2);
    // leia("tipo de variavel",&<<endereço de memoria) onde vai alocar);
    printf("\n as letras escolhidas sao: %c e %c",num,num2);


    return 0;
}
