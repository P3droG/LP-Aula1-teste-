#include <stdio.h> //posso usar a msm variavel em partes diferentes do codigo?
#define D 2 // Dias
#define C 2 // Clientes
int main(){
    int p1[D][C]; //uma matriz pra pergunta 1
    int p2[D][C]; //matriz pra pergunta 2
    int d3, c3, d, c, opcao, prgnt, p2cont=0, p1cont=0;

    // leitura dos dados
    for(d=0; d<D; d++){ //dias
        for(c=0; c<C; c++){ //clientes
            printf("Dia %d, Cliente %d\n", d+1, c+1);
            printf("Encontrou oque procurava? (1-sim / 2-nao): "); //pergunta 1
            scanf("%d", &p1[D][C]);
            if(p1[D][C]==1){
                p1cont++;
            }
            printf("Ficou satisfeito? (1-sim / 2-nao): "); //pergunta 2
            scanf("%d", &p2[D][C]);
            if(p2[D][C]==1){
                p2cont++;
            }

        }
    }
    do{
        printf("1-Relatorio por dia\n");
        printf("2-Relatorio por pergunta\n");
        printf("3-Relatorio por cliente\n");
        printf("4-Relatorio geral\n");
        scanf("%d", &opcao);
        if(opcao==1){ //relatorio1
            printf("Digite o dia que deseja o relatario\n");//leitura do dia escolhido
            scanf("%d", &d);
            for(int j=0; j<C; j++){ //clientes
                printf("Pergunta 1: %f.2%%\n", ((float)p1[d][j]));
                printf("Pergunta 2: %f.2%%\n", ((float)p2[d][j]));     
            }
        }else if(opcao==2){
            printf("Qual pergunta? 1 ou 2");
            scanf("%d", &prgnt);
            if(prgnt==1){
                printf("%.2f", ((float)p1cont/C)*100);
            }else{
                printf("%.2f", ((float)p2cont/C)*100);
            }
        }else if(opcao==3){
            printf("Qual a numeracao do cliente?");
            scanf("%d", &c);
            printf("Digite o dia que deseja o relatoprio");//leitura do dia escolhido
            scanf("%d", &d);
            printf("Pergunta 1: %d%%\n", p1[d3][c3]);
            printf("Pergunta 2: %d%%\n", p2[d3][c3]);
        }
    }while(opcao != -1);
}