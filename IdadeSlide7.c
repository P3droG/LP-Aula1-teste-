#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int media=0, cont=0, idade;
    char op;
    float mtotal;

    do{
        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        media=media+idade;
        cont=cont+1;
        if(idade>=18){
            printf("Você é maior de idade\n");
        }else{
            printf("Você é menor de idade\n");
        }
        printf("Você deseja continuar? s para SIM e n para NÃO\n");
        scanf(" %c", &op);
    }while(op=='s');
    mtotal=media/cont;
    printf("Média = %.2f\n", mtotal);
}