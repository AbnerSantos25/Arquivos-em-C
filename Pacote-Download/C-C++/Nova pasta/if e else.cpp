#include <stdio.h>

int main ()
{
    float media;

    printf("informe a media: ");
    scanf("%f", &media);
    if(media>=5)
        printf("o aluno foi aprovado!");
    else
    {
        if(media>=2.5)
            printf("o aluno esta em recuperacao!");
        else
        {
            printf("o aluno foi reprovado!");

        }
    }



    return 0;
}
