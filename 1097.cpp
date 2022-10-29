#include <stdio.h>
int main(){
 int num = 1, cont = 7;
 while (num <= 9){
 	printf("I=%d J=%d\n", num, cont --);
 	printf("I=%d J=%d\n", num, cont --);
 	printf("I=%d J=%d\n", num, cont --);
	num += 2;
 	cont += 5;
 }
 return 0;
}
