#include<stdio.h>
int main()
{
    int Gol_inter=0,Gol_gremio=0,jogo=0,empate=0,inter=0,gremio=0,repetir;
    scanf("%d",&Gol_inter);
    scanf("%d",&Gol_gremio);
    if(Gol_inter>Gol_gremio)
    inter++;
    if(Gol_inter<Gol_gremio)
    gremio++;
    if(Gol_inter==Gol_gremio)
    empate++;
    jogo++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&repetir);
    while(repetir==1)
    {
        scanf("%d",&Gol_inter);
        scanf("%d",&Gol_gremio);
        if(Gol_inter>Gol_gremio)
        inter++;
        if(Gol_inter<Gol_gremio)
        gremio++;
        if(Gol_inter==Gol_gremio)
        empate++;
        jogo++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&repetir);
    }
     printf("%d grenais\n",jogo); 
     printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio); 
    printf("Empates:%d\n",empate); 
    if (inter>gremio) 
    printf("Inter venceu mais\n"); 
    if (inter<gremio) 
    printf("Gremio venceu mais\n"); 
    if (inter==gremio) 
    printf("Nao houve vencedor\n"); 
 return 0; 
}
