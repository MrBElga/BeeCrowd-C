#include <stdio.h>
 
int main()
{
    int n,x,i,j,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        for(j=1,p=0;j<x;j++){
            if(x%j==0){
            p+=j;
 
    }
        }
        if(p==1){
        printf("%d eh primo\n",x);
    }
    else{
         printf("%d nao eh primo\n",x);
    }
    }
 
    return 0;
}
