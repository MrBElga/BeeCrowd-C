#include <stdio.h>

int main (){
	long int T,R1,R2,RT;
	
	scanf("%ld", &T);
	while(T>0){
		scanf("%ld %ld", &R1,&R2);
		RT=R1+R2;
		printf("%ld\n", RT);
		T--;
	}
	    return 0;
	
}
