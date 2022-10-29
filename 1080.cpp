#include<stdio.h>
int main(){
    int c1, c2,num,m, pos;
 c2=0;
 m=0;
    for(c1=1;c1<=100;c1++){
        scanf("%d",&num);
        if(m<num)
        {
            m=num;
            pos=c1;
        }
    }
    printf("%d\n%d\n",m,pos);
    return 0;
}
