//teste 10 se nao rodar nao rodou
#include <stdio.h>

int main(){
	
	unsigned  int ina,inb;
	
	while((scanf("%u %u",&ina,&inb))!=EOF)
				{
				  printf("%u\n",(ina^inb));
				}
	return 0;							
}
