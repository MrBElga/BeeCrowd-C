#include <stdio.h>
int main() {
   float sal,NS=0;
    int p;
    scanf("%f",&sal);
    if(sal>=0 && sal <= 400.00)
    {
        p = 15;
        NS = sal + (sal*p)/100;
    }
    else 
    if(sal>=400.01 && sal <= 800.00)
    {
        p = 12;
        NS = sal + (sal*p)/100;
    }
    else 
    if(sal>=800.01 && sal <= 1200.00)
    {
        p = 10;
        NS = sal + (sal*p)/100;
    }
    else
    if(sal>=1200.01 && sal <= 2000.00)
    {
        p = 7;
        NS = sal + (sal*p)/100;
    }
    else 
    if(sal>2000.01)
    {
        p = 4;
        NS = sal + (sal*p)/100;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",NS,NS-sal,p);
    return 0;
}
