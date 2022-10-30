#include <stdio.h>
int main()
{
   int i,p,num,menor;
    scanf("%d", &num);
	int vet[num];
    for(i=0; i<num; i++)
        scanf("%d", &vet[i]);
    menor=vet[0];
    for(i=1; i<num; i++)
    {
        if(menor>vet[i])
        {
            menor=vet[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, p);
    return 0;
}
