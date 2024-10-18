#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXPILHA 26

struct TpPilha{
	char PILHA[MAXPILHA];
	int TOPO;
};

void inicializa(TpPilha &P){
	P.TOPO = -1;
}

void insere(TpPilha &P, char Elemento){
	P.PILHA[++P.TOPO] = Elemento;
}

char retira(TpPilha &P){
	return P.PILHA[P.TOPO--];
}

char elemenTopo(TpPilha P){
	return P.PILHA[P.TOPO];
}

char vazia(int TOPO){
	return TOPO == -1;
}

int main(void){
	int ch = 0, j = 0, n = 0, i = 0;
	char vetE[27], vetS[27], elem;
	TpPilha P;

	scanf("%d", &ch);  
	while (ch != 0) {
		for (i = 0; i < ch; i++) {
			scanf(" %c", &vetE[i]);  
		}	
		for (i = 0; i < ch; i++) {
			scanf(" %c", &vetS[i]);  
		}

		i = 0;
		j = 0;
		n = 0;
		int impossivel = 0;
		inicializa(P);  


		while (n < ch) {
			insere(P, vetE[n]);
			printf("I");  
			
			while (!vazia(P.TOPO) && elemenTopo(P) == vetS[j]) {
				retira(P);
				j++;
				printf("R"); 
			}

			n++;  
		}


		if (!vazia(P.TOPO)) {
			impossivel = 1;
		}


		if (impossivel) {
			printf(" Impossible");
		}

		printf("\n");

		scanf("%d", &ch); 
	}

	return 0;
}

