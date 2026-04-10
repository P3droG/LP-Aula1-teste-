#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    float temp, fluv, mfluv=0, mtemp=0, cont=0, mftemp, mffluv;

    printf("Vamos calcular a média anual da temperatura e índice pluvial\n");

    for(int i=1; i<=12; i++)
    {
        printf("Digite a medição da temperatura e a medição mensal do índice pluvial do mês %d\n", i);
        scanf("%f%f", &temp, &fluv);
        mtemp=mtemp+temp;
        mfluv=mfluv+fluv;
        cont=cont+1;
    }
    mftemp=mtemp/cont;
    mffluv=mfluv/cont;
    printf("A média anual de temperatura é: %.2f\nA média anual fluvial é: %.2f\n", mftemp, mffluv);
}