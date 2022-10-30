#include<stdio.h>
int main()
{
   long long int n, num1 = 0, num2 = 1, p, c;
   int i,j;
   scanf("%d", &j);
   for(i=1; i<=j; i++, num1 = 0, num2 = 1)
   {
       scanf("%lld",&n);
       n=n+1;
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) p = c;
          else
          {
             p = num1 + num2;
             num1 = num2;
             num2 = p;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,p);
   }
   return 0;
}
