#include <stdio.h>

int main(){
	 int A,B,C,D;
    scanf("%d", &A);
    for(B=1; B<=A; B++)
    {
        C=B*B; //ou C=pow(B,2)
        D=B*B*B; //ou D=pow(B,3)
        printf("%d %d %d\n",B,C,D);
    }
	return 0;
}
