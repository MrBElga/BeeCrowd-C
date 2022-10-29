#include<stdio.h>
int main(){
    int num1, num2;

    do {

        scanf("%d%d", &num1, &num2);
        if (num1 > num2) {
            printf("Decrescente\n");
        } else if (num1 < num2) {
            printf("Crescente\n");
        }
    } while (num1 != num2);
    return 0;
}
