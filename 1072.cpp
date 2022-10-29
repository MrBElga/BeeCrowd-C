#include<stdio.h>

int main(){
  
    int Quant, num, in=0, out=0, i;
    
    scanf("%d", &Quant);
 
    for(i=0;i<Quant;i++){
        scanf("%d",&num);
        if((num>=10) && (num<=20)){
            in++;
        }else{
            out++;
        }
    }
  
    printf("%d in\n", in);
    printf("%d out\n",out);
    return 0;
}
