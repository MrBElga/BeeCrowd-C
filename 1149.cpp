#include <stdio.h>

int main(){
	int i,N,A,res=0;
	
	scanf("%d %d", &i,&N);
	while(N<=0){
		scanf("%d",&N);
	}
	for(A=1;A<=N;A++){
		res+=i;
		i++;	
	}
		printf("%d\n",res);
		
	return 0;
}
