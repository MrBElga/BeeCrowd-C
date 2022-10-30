#include <stdio.h>

int main()
{
int num,n,resp=1;

scanf("%d", &num);
for(n=num;n>=1; n--){
            resp=resp*n;
        }
printf ("%d\n",resp);
return 0;
}
