#include <stdio.h>
 

 
int main() {

int id,A,M,D;

scanf("%d",&id);

A=id/365;

M=(id%365)/30;

D=(id%365)%30;

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",A,M,D);
    return 0;
}
