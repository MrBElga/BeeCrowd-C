#include<stdio.h>
int main() {
 int num1=1,num2=60,I,J;;

    for(num1=1,num2=60;num2>=0;num1+=3,num2-=5){
        printf("I=%d J=%d\n",num1,num2);   
    }
    return 0;
}
