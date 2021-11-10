#include <stdio.h>

int main()
{
int ano=2012, anoatual=2021;
float sal=600.00, aumento=1.5;
printf("\tano: %4d\tsalario: %4.2f\t\tpercentual: %5.1f%%\n",ano,sal);
for(int i=ano+1; i<= anoatual; i++)
{
    if(i !=ano+1)
        aumento *=2;
        sal += (sal * aumento)/100;
        printf("\tano: %4d\tsalario: %4.2f\t\tpercentual: %5.1f\n",ano,sal,aumento);
}

return 0;
}
