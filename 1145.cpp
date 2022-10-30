#include <stdio.h>
int main() {
 int x=0,y=0,N,J=0;
	scanf("%d %d",&x,&y);
	   if((1<x<20)&&(y<100000)){
	     	for(N=1;N<=y;N++){
				J++;
	        	if(J==x){
	            	printf("%d\n",N);
	            	J=0;
				}
	          	else{
	     				printf("%d ",N);
	      }
	   }
	}
}
