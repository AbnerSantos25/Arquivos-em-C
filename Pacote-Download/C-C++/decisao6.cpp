#include <stdio.h>

int main()
{
    float a, b, c, d, med;
    printf("calcula a media de 4 notas de 0 a 10 e transforma em um conceito.\n");

    do{
    printf("insira a primeira nota: \n");
    scanf("%f",&a);
    if(a<0 || a>10)
     
    }while(a<0 || a>10);
    printf("insira a segunda nota: \n");
    do{
    scanf("%f",&b);
    if(b<0 || b>10)
        prinf("nota invalida \n");
    }while(b<0 || b>10);
    printf("insira a terceira nota: \n");
    do{
    scanf("%f",&c);
    if(c<0 || c>10)
        prinf("nota invalida \n");
    }while(c<0 || c>10);
    printf("insira a quarta nota: \n");
    do{
    scanf("%f",&d);
    if(d<0 || d>10)
        prinf("nota invalida \n");
    }while(d<0 || d>10);
    med=(a+b+c+d)/4;
    if(med<=2.5)
        printf("media: %f \t conceito : E");
    else
    {
        if(med<5)
            printf("media: %f \t conceito : D");
        else
            if(med<7)
            printf("media: %f \t conceito : C");
        else
            if(med<8.5)
            printf("media: %f \t conceito : B");

            else
            printf("media: %f \t conceito : A");


    }

    return 0;
}
