#include <stdio.h>
int potencial(int num1, int num2);

int main(){

int base, expoente, result;
printf("informe a base: ");
scanf("%d", &base);
printf("informe o expoente: ");
scanf("%d", &expoente);

result = potencial(base,expoente);
printf("\nO resultado da base %d elevado a %d = %d",base, expoente, result);

}

int potencial(int num1, int num2){
int vPot;
 if(num2 < 1){
    return num1 = 1;
 }else{
     return  num1 * potencial(num1, num2 - 1);
}
}
