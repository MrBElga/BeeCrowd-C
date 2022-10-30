#include <stdio.h>

int main(){
	int i,n,j;
	scanf("%d",&i);	
	while(i!=0){
		for(n=1;n<=i;n++){
			if(n!=i){
				printf("%d ",n);
				}
			else{
				printf("%d\n",n);	
			}	
		}
	 	scanf("%d",&i);
	}

}
