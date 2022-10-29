#include <stdio.h>

int main()
{
    int Num;
    Num= 1;

    while(Num != 2002)
    {
        scanf("%d", &Num);
        if(Num == 2002){
            printf("Acesso Permitido\n" );
        }else{
            printf("Senha Invalida\n" );
        }
    }
        return 0;
}
