#include <stdio.h>

	int main() {
	char  mam, quad, bi, voa, mar, oni, fru, herb;
	char  ave, cp, ct, nad, rap, op;
    char  rep, cc, carn, carni, sp;

        do{
                printf(" MAE DINGA \n TEM O PODER DE DESCOBRIR O QUE VOCE ESTA PENSANDO !!!\n ESCOLHA ENTRE OS ANIMAIS ABAIXO RELACIONADOS \n E MEMORIZE APENAS UM DELES E NAO MUDE MAIS.");
                printf("\n\n");
                printf(" TIGRE");
                printf("\n GIRAFA");
                printf("\n HOMEM");
                printf("\n MACACO");
                printf("\n MORCEGO");
                printf("\n BALEIA");
                printf("\n AVESTRUZ");
                printf("\n PINGUIM");
                printf("\n PATO");
                printf("\n AGUIA");
                printf("\n TARTARUGA");
                printf("\n CROCODILO");
                printf("\n COBRA");
                printf("\n \n AGORA VAMOS CONTINUAR. ");
                printf("\nO animal escolhido é mamífero ");
                scanf("%c",&mam);
                if(mam =="s"){
                    printf("\nO animal escolhido é Carnívoro ");
                    scanf("%c",&carn);
                    printf("\nO animal escolhido é Herbivoro ");
                    scanf("%c",&herb);
                    printf("\nO animal escolhido é Onivoro ");
                    scanf("%c",&oni);
                    printf("\nO animal escolhido é Frutifero ");
                    scanf("%c",&fru);
                    printf("\nO animal escolhido é Voador ");
                    scanf("%c",&voa);
                    printf("\nO animal escolhido é Marinho ");
                    scanf("%c",&mar);
                        if(carn == "s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido é Tigre.\n");
                            printf("--------------------------------\n");
                        }else if(herb == "s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido é Girafa.\n");
                            printf("--------------------------------\n");
                        }else if(oni == "s"){
                            printf("\n-------------------------------");
                            printf("\nO animal escolhido é Homem.\n");
                            printf("--------------------------------\n");
                        }else if(fru =="s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido é Macaco.\n");
                            printf("--------------------------------\n");
                        }else if(voa =="s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido é Morcego.\n");
                            printf("--------------------------------\n");
                        }else if(mar =="s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido é Baleia.\n");
                            printf("--------------------------------\n");
                        }
                }
                ave = mam;
                if(mam =="n"){
                    printf("\nO animal escolhido é do tipo Aves ");
                   scanf("%c",&ave);
                        if((mam =="n") e (ave == "s")){
                            printf("O animal escolhido é clima tropical ");
                            scanf("%c",&ct);
                            printf("\nO animal escolhido é de clima polar ");
                            scanf("%c",&cp);
                            printf("\nO animal escolhido é Nadador ");
                            scanf("%c",&nad);
                            printf("\nO animal escolhido é de Rapina ");
                            scanf("%c",&rap);
                                if(ct =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido é Avestruz.\n");
                                    printf("--------------------------------\n");
                                }else if(cp =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido é Pinguim.\n");
                                    printf("--------------------------------\n");
                                }else if(nad == "s"){
                                    printf("--------------------------------");
                                    printf("\nO animal escolhido é Pato.\n");
                                    printf("--------------------------------");
                                }else if(rap =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido é Aguia.\n");
                                    printf("--------------------------------\n");
                                }
                        }
                }
                rep = ave;
                if(ave =="n"){
                    printf("\nO animal escolhido é do tipo Réptil ");
                    scanf("%c",&rep);
                        if(rep =="s"){
                            printf("O animal escolhido é clima tropical ");
                            scanf("%c",&cc);
                            printf("\nO animal escolhido é de clima polar ");
                            scanf("%c",&carni);
                            printf("\nO animal escolhido é Nadador ");
                            scanf("%c",&sp);
                                if(cc =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido é Tartaruga.\n");
                                    printf("--------------------------------\n");
                                }else if(carni =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido é Crocodilo.\n");
                                    printf("--------------------------------\n");
                                }else if(sp =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido é Cobra.\n");
                                    printf("--------------------------------\n");
                                }
                        }else{
                            printf("O animal não consta na lista.\n");
                        }
                }
                printf("\nVocê deseja procurar mais algum animal ");
                scanf("%c",&op)    ;
        }while(op == "s")

        return 0;

    }
}

