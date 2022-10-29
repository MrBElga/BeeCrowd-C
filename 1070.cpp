#include <stdio.h>

int main() {
  int cont,num;
    scanf("%d",&num);
    if(num%2==0)
        num=num+1;
    else
     	num=num;
        printf("%d\n",num);
    for(cont=1;cont<=5;cont++)
        printf("%d\n",num+=2);
    return 0;
}
