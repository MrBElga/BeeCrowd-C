#include <stdio.h>
 

 
int main() {
 
int T, H, HS, M, S;
HS=3600;
scanf("%d", &T);
H=(T/HS);
M=(T -(HS*H))/60;
S= (T-(HS*H)-(M*60));
printf("%d:%d:%d\n",H,M,S);
return 0;
}
