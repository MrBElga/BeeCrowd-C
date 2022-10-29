#include <stdio.h>
int main(){
    int j,i;
    double d=0.0;
    for (i=0; i<11; i++){
        j=1;
        if (i==0 || i==5 || i==10){
            printf("I=%i J=%i\n",(int)(i*0.2),(int)(i*0.2)+j++);
            printf("I=%i J=%i\n",(int)(i*0.2),(int)(i*0.2)+j++);
            printf("I=%i J=%i\n",(int)(i*0.2),(int)(i*0.2)+j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n",d,d+j++);
            printf("I=%.1lf J=%.1lf\n",d,d+j++);
            printf("I=%.1lf J=%.1lf\n",d,d+j);
        }
        d += 0.2;
    }
    return 0;
}
