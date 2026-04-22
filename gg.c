#include <stdio.h>

int main()
{
    int qntd, tp, contmrcnr, contlmpz, contprcvs, cont, cont60k;
    float prc, vlrttl, maior;
    char nm[50];

    cont60k = 0;
    maior = 0;
    contmrcnr = 0;
    contlmpz = 0;
    contprcvs = 0;

    for (int i = 1; i <= 34; i++)
    {
        cont = 0;
        vlrttl = 0;
        scanf("%f", &prc);
        if (maior < prc)
        {
            maior = prc;
        }
        do
        {
            cont++;
            scanf(" %s", nm);
            scanf("%d", &qntd);
            scanf("%d", &tp);
            if (tp == 1)
            {
                contmrcnr++;
            }
            else
            {
                if (tp == 2)
                {
                    contlmpz++;
                }
                else
                {
                    contprcvs++;
                }
            }
            scanf("%f", &prc);
        } while (prc != -1);
        if (vlrttl < 60000)
        {
            cont60k++;
        }
        printf("%f", vlrttl);
        printf("%.2f%.2f%.2f", ((float)contmrcnr / cont) * 100, ((float)contlmpz / cont) * 100, ((float)contprcvs / cont) * 100);
    }
    printf("%f", maior);
    printf("%d", cont60k);
    printf("%.2f%.2f%.2f", ((float)contmrcnr / cont) * 100, ((float)contlmpz / cont) * 100, ((float)contprcvs / cont) * 100);
}