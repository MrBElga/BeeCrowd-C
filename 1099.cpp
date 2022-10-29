#include <stdio.h>
int main(){
 int n, x, y, z;
 int k = 0;
 scanf("%d", &n);
 int i, j;
 	while (i < n){
		scanf("%d %d", &x, &y);
		if (x == y || y == x + 1 || x == y +1){
			printf("0\n");
	 	}  
		else if ( x < y || x > y){
			if (x > y){
			z = x;
			x = y;
			y = z;
  			}
  			for (j = 0; j < n; j++){ 
   				while(x < y - 1){
     				x += 1; 
					if(x % 2 != 0){
						k += x;
     				}
      			}	
    		}
			printf("%d\n", k);
			k = 0;
  		}
 		i++;
 	}
 	return 0;
}
