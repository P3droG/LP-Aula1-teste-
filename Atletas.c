#include <stdio.h>

int  main(){
    float oxigenio, oxigeniomed, soma, menos96=0, freqcardiaca, maior;
    int mais25=0, menos16=0, idade, cont;

    for(int i=1; i<=10; i++)
    {
        maior=0;
        oxigeniomed=0;
        soma=0;
        cont=0;
        scanf("%d", &idade);
        if(idade>25)
        {
            mais25++;
        }else
            {
                if(idade<16)
                {
                    menos16++;
                }
            }
        scanf("%f", &oxigenio);
        while(oxigenio != -1){
            soma+=oxigenio;
            cont++;
            scanf("%f", &oxigenio);
        }
            for(int j=1; j<=8; j++)
            {
                scanf("%f", &freqcardiaca);
                if(maior<freqcardiaca)
                {
                    maior=freqcardiaca;
                }
            }
        oxigeniomed=soma/cont;
        if(oxigeniomed<96){
            menos96++;
        }
        printf("%f", oxigeniomed);
        printf("%f", maior);
    }
    printf("%d", menos96);
    printf("%.2f%.2f", ((float)mais25/10)*100, ((float)menos16/10)*100);
}