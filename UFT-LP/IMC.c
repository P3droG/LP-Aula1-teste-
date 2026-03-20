#include <stdio.h>

int main()
{
    float peso, altura, imc;
    int sexo;
    float min, max;
    
    for(int i=1; i<=15; i++)
    {
        printf("\nPessoa %d\n", i);
        
        printf("Peso (kg): ");
        scanf("%f", &peso);
        
        printf("Altura (m): ");
        scanf("%f", &altura);
        
        printf("Sexo (1 para homem / 2 para mulher) ");
        scanf("%d", &sexo);
        
        imc=peso / (altura * altura);
        
        if(sexo == 1){
            min = 19;
            max = 25;
        }else{
            min = 18;
            max = 24.5;
        }
        
        if(imc < min){
        printf("Vc esta abaixo do peso\n");
        }
        else if(imc > max){
            printf("Vc ta gordo cara\n");
        }
        else{
            printf("Parabens, vc esta no peso ideal\n");
        }
    } 
}
