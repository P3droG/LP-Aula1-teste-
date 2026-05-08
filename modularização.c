#include <stdio.h>

float pot(float, int);
int main(){
    float x;
    int y;
    float resposta;
    scanf("%f", &x);
    scanf("%d", &y);
    resposta = pot(x, y);
    printf("%g", resposta);
}
float pot(float base, int e){
    float resposta = 1;
    int i;
    if(e<0){
        base = 1/base;
        e = -e;
    }
    for (int i = 0; i < e; i++) {
        resposta *= base;
    }
    return resposta;
}