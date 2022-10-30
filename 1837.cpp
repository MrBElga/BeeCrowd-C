#include <stdio.h>
int main(){
    int num1,num2,c,f,q,r;
    scanf("%d%d",&num1,&num2);
    c=num2;
    if(num1<0){
        if(num2<0){
            c=num2*-1;
            }
        for(r=0;r<c;r++)
            {
                f=num1-r;
                if(f%num2==0) {
                break;
                }
            }
        q=f/num2;
    }
    else
    {
        q=num1/num2;
        r=num1%num2;
    }
    printf("%d %d\n",q,r);
    return 0;
    }
