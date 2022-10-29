#include <stdio.h>
int main()
{
    double n1, n2, n3, d, ma, med;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &d);
    med = (n1 * 2 + n2 * 3 + n3 * 4 + d) / 10;
    printf("Media: %.1f\n", med);
    if (med >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (med >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &ma);
        printf("Nota do exame: %.1f\n", ma);
        if (ma + med / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (ma + med ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
