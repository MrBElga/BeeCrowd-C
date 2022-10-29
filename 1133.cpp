#include<stdio.h>
int main(){
    int X, Y, cont;
    scanf("%d%d", &X,&Y);
    if (X > Y) {
       for (cont = Y+1 ; cont < X; cont++) {
       if (cont % 5 == 2 || cont % 5 == 3) {
         printf("%d\n", cont);}
            }
        }else if(X < Y){
        for (cont = X+1 ; cont < Y; cont++) {
             if (cont % 5 == 2 || cont % 5 == 3) {
                    printf("%d\n", cont);
                }
           }
    }

}
