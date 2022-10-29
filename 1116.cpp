#include<stdio.h>
int main()
{
      int n,x,y;
      double  result;
      scanf("%d",&n);
      while(n--){
            scanf("%d %d",&x,&y);
            if(y==0)
            printf("divisao impossivel\n");
            else{
                  result=(double) x/y;
                  printf("%.1lf\n",result);
            }
      }
}
