#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int N, I;
 
 scanf("%d", &N);
 
 for(I=1;I<=N*4;I+=4){
  printf("%d %d %d PUM\n", I, I+1,I+2);
 }
 return 0;
}
