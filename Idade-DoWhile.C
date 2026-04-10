#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int idade;
    char op;
    do
    {
        printf("Qual a sua idade?\n");

    scanf("%d", &idade);
    if(idade>=18){
        printf("Você é maior de idade\n");
    }else{
        printf("Você é menor de idade\n");
    }
    printf("Deseja continuar? s ou n\n");
    scanf(" %c", &op);
    }while(op=='s');
}