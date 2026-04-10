#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int idade;
    char op;

    printf("Gostaria de iniciar a classificação das idades? s ou n\n");
    scanf(" %c", &op);

    while(op=='s'){
        printf("Qual a sua idade?\n");

        scanf("%d", &idade);
        if(idade>=18){
        printf("Maior de idade\n");
            }else{
                printf("Menor de idade\n");
            }
        printf("Deseja continuar? s ou n\n");
            scanf(" %c", &op);
    }
}