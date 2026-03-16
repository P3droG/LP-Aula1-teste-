#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    float temp, fluv, mfluv=0, mtemp=0, cont=0, mftemp, mffluv;
    char op;

    do{
        printf("Digite a medição da temperatura e a medição mensal do índice pluvial\n");
        scanf("%f%f", &temp, &fluv);
        mtemp=mtemp+temp;
        mfluv=mfluv+fluv;
        cont=cont+1;
        printf("Deseja prosseguir pro próximo mês? s para SIM, n para NÃO\n");
            scanf(" %c", &op);
    }while(op=='s');
    mftemp=mtemp/cont;
    mffluv=mfluv/cont;
    printf("A média de temperatura é: %.1f\n A média fluvial é: %.1f\n", mftemp, mffluv);
}