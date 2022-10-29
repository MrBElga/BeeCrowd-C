#include <stdio.h>

int main() {
  int cont,num;
    scanf("%d",&num);
    if(num%2==0)
        num=num-1;
    for(cont=1;cont<=num;cont+=2)
        printf("%d\n",cont);
    return 0;
}
