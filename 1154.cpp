#include <stdio.h>

int main(){
	
	double i,div,som,cont;
	scanf("%lf",&i);
	cont+=1;
	som+=i;
	while(i>0){
		scanf("%lf",&i);
		if(i>0){
			som+=i;
			cont++;	
		}
	}
	printf("%.2lf\n",(som/cont));
	return 0;
}
