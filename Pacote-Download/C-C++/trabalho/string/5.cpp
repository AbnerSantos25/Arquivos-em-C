#include <stdio.h>
#define MAX 50

int main()
{
char str[MAX], copia[MAX];
int i, compstr;

printf("Entre com uma frase (max 50 caracteres): ");
gets(str);

for(compstr=0; str[compstr]; compstr++);

for(i=0; str[i]; i++)
{
   copia[i] = str[compstr-i-1];
}
copia[i] = '\0';
printf("\nFrase Invertida: %s\n", copia);
}
