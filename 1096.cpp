#include <stdio.h>

int main() {
  int num1,num2,I,J;
    for(num1=1;num1<=9;num1+=2){
        for(num2=7;num2>=5;num2--)
            printf("I=%d J=%d\n",num1,num2);
    }
    return 0;
}
