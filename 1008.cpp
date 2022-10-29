#include <stdio.h>
int main() {

    int num, hrs;
    float valorhr;

    scanf("%i %i %f", &num, &hrs, &valorhr);
 
    printf("NUMBER = %i\n",num);
    printf("SALARY = U$ %.2f\n",(hrs*valorhr));
  
    return 0;
}
