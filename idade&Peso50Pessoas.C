#include <stdio.h>
#define T 3
/*Ler a idade e o peso de 50 pessoas, mostrar a média das idades,
o número de pessoas com idade abaixo da média, porcentagem de menores
de idade e o peso do mais velho, e quantas pessoas com idade entre 20 e 25 anos tem o peso maior que 90kg.
*/
int main()
{
    float peso[T];
    int total=0, idade[T], menoridade=0, i, maisvelho=0, gj=0, pesodovei, menormedia=0, media;

    for(i=0; i<T; i++)
    {
        printf("Coloca tua idade ae");
        scanf("%d", &idade[i]);
        printf("Coloca teu peso ae");
        scanf("%f", &peso[i]);
            if(idade[i]<18)
            {
            menoridade++;
            }
            if(idade[i]<25 && idade[i]>20 && peso[i]>90)
            {
                gj++;
            }
            if(idade[i]>maisvelho)
            {
                maisvelho=idade[i];
                pesodovei=peso[i];
            }
        total=total+idade[i];
    }
    media=total/T;
    for(i=0; i<T; i++)
    {
        if(idade[i]<media)
        {
            menormedia++;
        }
    }
    printf("media das idades: %d", media);
    printf("n de pessoas abaixo da media: %d", menormedia);
    printf("porcentagem dos menores de idade:%f", ((float) menoridade/T)*100);
    printf("peso do mais velho%d", pesodovei);
    printf("entre 20 e 25 com mais de 90kg: %d", gj);
} 