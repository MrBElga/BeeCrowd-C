#include <stdio.h>
int main() {
    int in,fn;
    scanf("%d%d",&in,&fn);
    if(in>=fn)
    fn+=24;
    in = fn - in;
    printf("O JOGO DUROU %d HORA(S)\n",in);
return 0;
}
