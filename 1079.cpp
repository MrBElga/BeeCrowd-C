#include <stdio.h>
int main()
{
 int i,num=0;
 float Pv1=0,Pv2=0,Pv3=0,tot=0,media=0;
 	scanf("%d",&num);
 	for(i=1;i<=num;i++){
			scanf("%f%f%f",&Pv1,&Pv2,&Pv3);
			tot=Pv1*2.0+Pv2*3.0+Pv3*5.0;
			media=tot/10.0;
			printf("%.1f\n",media);
		}
    return 0;
}
