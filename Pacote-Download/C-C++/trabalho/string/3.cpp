#include <stdio.h>
#include <string.h>
int main ()
{
	char frase[100], frase_2[100], palavra[100];
    int tamanho, i ;
	printf("Entre com uma string: ");
	gets(frase);
	
    tamanho = strlen(frase);
    strcpy(palavra,"\0");
    strcpy(frase_2, "\0");
    int cont = 0;

    for (i = 0; i <= tamanho; i++)
    {
        if ((frase[i] != ' ') && (frase[i] != '\0'))
        {
            frase_2[cont] = frase[i];
            cont++;
        }
        else {
            frase_2[cont] = '\0';
            strcat(palavra, frase_2);
            strcat(palavra, " ");
            strcat(palavra, frase_2);
            strcat(palavra, " ");
            strcpy(frase_2, "\0");
            cont = 0;
        }
    }
    
   puts(palavra);
    return(0);
}