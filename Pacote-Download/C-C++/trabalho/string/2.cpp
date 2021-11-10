#include <stdio.h>
main()
{
int index;
char frase[50];

printf("entre com a frase (max 50 caracteres): ");
gets(frase);
for (index =0 ; frase[index] != '\0'; index++)
{
   switch(frase[index])
   {
     case 'a':
            frase[index] = '*';
            break;
            case 'e':
            frase[index] = '*';
            break;
            case 'i':
            frase[index] = '*';
            break;
            case 'o':
            frase[index] = '*';
            break;
            case 'u':
            frase[index] = '*';
            break;
   }
}
printf("\n\nnova frase sem as vogais: \n%s", frase);
return 0;
}
