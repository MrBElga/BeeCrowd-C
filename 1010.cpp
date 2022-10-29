#include <stdio.h>
int main ()
{
int pc1, numpc1, pc2, numpc2;
double valpc1, valpc2;
scanf("%d %d %lf",&pc1,&numpc1,&valpc1);
scanf("%d %d %lf",&pc2,&numpc2,&valpc2);
printf("VALOR A PAGAR: R$ %0.2f\n",(numpc1*valpc1)+(numpc2*valpc2));
return 0;
}
