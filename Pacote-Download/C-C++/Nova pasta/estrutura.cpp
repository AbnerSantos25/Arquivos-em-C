#include <stdio.h>

int main ()
{
    float media;

    printf("informe a media: ");
    scanf("%f", &media);
    if(media>=5  &&  media<=10)              //&& <== significa conectivo "e"
        printf("o aluno foi aprovado!");    // || significa conectivo    "ou"
    else                                    // ! significa conectivo     "não"
    {
        if(media>=2.5 && media<=5)
            printf("o aluno esta em recuperacao!");
        else
        {
            if(media>=0 && media<=2.5)
                printf("o aluno foi reprovado!");

            else
                printf("a nota nao pode ser negativa ou maior que 10");
        }
    }



    return 0;
}
