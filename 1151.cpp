#include<stdio.h>
int main(){
	int I,N,A=1,B=0,C=0,D=0;
	scanf("%d",&N);
	printf("0");
	if(N>1){
		printf(" 1");
	}
	if(N>2){
		for(I=1;I<=N-2;I++){
			B=D;
			C=A+B;
			A=C;
			printf(" %d",C);
			D=A-B;	
		}
	}
	printf("\n");
	return 0;
}
