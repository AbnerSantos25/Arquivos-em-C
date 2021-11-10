#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[150];
    int i,c, conta=0;

    printf("insira uma frase: \n");


    fgets(texto, 150, stdin);

    c = strlen(texto);

    printf("numero de letras e palavras = %d", c);

    for(i=0; texto[i] != '\0'; i++){

        if(texto[i]==' ') {

    conta++;
        }

    }printf(" %d",conta+1);


    return 0;
}
