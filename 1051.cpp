#include <stdio.h>

int main()
{
    float sal,a;
    scanf("%f", &sal);
    if(sal <= 2000.0) {
        printf("Isento\n");
    }
    else 
    if(sal <= 3000.0 ){
        a = (sal - 2000.0)*0.08;
        printf("R$ %.2f\n", a);
    }
    else 
    if( sal <= 4500.0){
        a = (sal- 3000.0)*0.18 + (1000*0.08);
        printf("R$ %.2f\n", a);
    }
    else {
        a = (sal - 4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2f\n", a);
    }
    return 0;
}
