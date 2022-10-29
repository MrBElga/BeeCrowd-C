#include <stdio.h>

int main() {
char a;

double A,B;

scanf("%s",&a);

scanf("%lf %lf",&A,&B);

printf("TOTAL = R$ %.2f\n",(A+B*0.15));
return 0;

}
