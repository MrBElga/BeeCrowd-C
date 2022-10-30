#include <stdio.h>

int main(){
	int x=0,z=0,c=0,cont=1;
	scanf("%d%d",&x,&z);
	c=x;
		do	{
			
			scanf("%d",&z);
			
 			}	while(z<=x);
		do 	{
			x++;
			c+=x;
			cont++;
		}		while(z>=c);
	printf("%d\n",cont);
	return 0;
	
	
	
}
