#include <stdio.h>
main()
{
int index;
char frase[150];
printf("programa para separar as palavras de uma frase em linhas\n");
printf("entre com a frase (max 150 caracteres): ");
gets(frase);
for (index =0 ; frase[index] != '\0'; index++)
{
   switch(frase[index])
   {
     case '\t':
            frase[index] = '\n';
            break;
     case ' ':
            frase[index] = '\n';
            break;
   }
}
printf("\nnova frase: \n%s", frase);
return 0;
}
