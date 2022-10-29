#include <stdio.h>

int main() {

int val1,val2;
scanf("%d %d",&val1,&val2);

if (val1==1)

printf("Total: R$ %.2f\n",4.00*val2);

else

if (val1==2)

printf("Total: R$ %.2f\n",4.50*val2);

else

if (val1==3)

printf("Total: R$ %.2f\n",5.00*val2);

else

if (val1==4)

printf("Total: R$ %.2f\n",2.00*val2);

else

if (val1==5)

printf("Total: R$ %.2f\n",1.50*val2);

return 0;

}
