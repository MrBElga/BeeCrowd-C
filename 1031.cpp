#include <stdio.h>

int tabela[100][1000];  

int encontrarSobrevivente(int totalRegioes, int salto){
   
    if(tabela[totalRegioes][salto] == -1){
       
        tabela[totalRegioes][salto] = (encontrarSobrevivente(totalRegioes - 1, salto) + salto) % totalRegioes;
    }
    return tabela[totalRegioes][salto]; 
}

int main(){
    int numRegioes, salto;

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 1000; ++j){
            tabela[i][j] = 0;
        }
    }
    for(int i = 2; i < 100; ++i){
        for(int j = 0; j < 1000; ++j){
            tabela[i][j] = -1;
        }
    }


    while(scanf("%d", &numRegioes) != 0){
        if(!numRegioes)  break;

        salto = 1;
     
        while((encontrarSobrevivente(numRegioes - 1, salto) + 1) % numRegioes != 12){
            ++salto;
        }

        printf("%d\n", salto);
    }

    return 0;
}

