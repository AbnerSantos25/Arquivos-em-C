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
                printf("\nO animal escolhido � mam�fero ");
                scanf("%c",&mam);
                if(mam =="s"){
                    printf("\nO animal escolhido � Carn�voro ");
                    scanf("%c",&carn);
                    printf("\nO animal escolhido � Herbivoro ");
                    scanf("%c",&herb);
                    printf("\nO animal escolhido � Onivoro ");
                    scanf("%c",&oni);
                    printf("\nO animal escolhido � Frutifero ");
                    scanf("%c",&fru);
                    printf("\nO animal escolhido � Voador ");
                    scanf("%c",&voa);
                    printf("\nO animal escolhido � Marinho ");
                    scanf("%c",&mar);
                        if(carn == "s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido � Tigre.\n");
                            printf("--------------------------------\n");
                        }else if(herb == "s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido � Girafa.\n");
                            printf("--------------------------------\n");
                        }else if(oni == "s"){
                            printf("\n-------------------------------");
                            printf("\nO animal escolhido � Homem.\n");
                            printf("--------------------------------\n");
                        }else if(fru =="s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido � Macaco.\n");
                            printf("--------------------------------\n");
                        }else if(voa =="s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido � Morcego.\n");
                            printf("--------------------------------\n");
                        }else if(mar =="s"){
                            printf("\n--------------------------------");
                            printf("\nO animal escolhido � Baleia.\n");
                            printf("--------------------------------\n");
                        }
                }
                ave = mam;
                if(mam =="n"){
                    printf("\nO animal escolhido � do tipo Aves ");
                   scanf("%c",&ave);
                        if((mam =="n") e (ave == "s")){
                            printf("O animal escolhido � clima tropical ");
                            scanf("%c",&ct);
                            printf("\nO animal escolhido � de clima polar ");
                            scanf("%c",&cp);
                            printf("\nO animal escolhido � Nadador ");
                            scanf("%c",&nad);
                            printf("\nO animal escolhido � de Rapina ");
                            scanf("%c",&rap);
                                if(ct =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido � Avestruz.\n");
                                    printf("--------------------------------\n");
                                }else if(cp =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido � Pinguim.\n");
                                    printf("--------------------------------\n");
                                }else if(nad == "s"){
                                    printf("--------------------------------");
                                    printf("\nO animal escolhido � Pato.\n");
                                    printf("--------------------------------");
                                }else if(rap =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido � Aguia.\n");
                                    printf("--------------------------------\n");
                                }
                        }
                }
                rep = ave;
                if(ave =="n"){
                    printf("\nO animal escolhido � do tipo R�ptil ");
                    scanf("%c",&rep);
                        if(rep =="s"){
                            printf("O animal escolhido � clima tropical ");
                            scanf("%c",&cc);
                            printf("\nO animal escolhido � de clima polar ");
                            scanf("%c",&carni);
                            printf("\nO animal escolhido � Nadador ");
                            scanf("%c",&sp);
                                if(cc =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido � Tartaruga.\n");
                                    printf("--------------------------------\n");
                                }else if(carni =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido � Crocodilo.\n");
                                    printf("--------------------------------\n");
                                }else if(sp =="s"){
                                    printf("\n--------------------------------");
                                    printf("\nO animal escolhido � Cobra.\n");
                                    printf("--------------------------------\n");
                                }
                        }else{
                            printf("O animal n�o consta na lista.\n");
                        }
                }
                printf("\nVoc� deseja procurar mais algum animal ");
                scanf("%c",&op)    ;
        }while(op == "s")

        return 0;

    }
}

