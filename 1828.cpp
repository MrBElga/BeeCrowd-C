#include <stdio.h>
#include <string.h>
int main()
{
    int T,R,c;
    char TE[]="tesoura", PA[]="papel", PE[]="pedra", LA[]="lagarto", SP[]="Spock", J1[10],J2[10];

    scanf("%d",&T);
    for(R=1; R<=T; R++)
    {
        scanf("%s %s", &J1,&J2);
        if(0==strcmp(J1,J2))
            printf("Caso #%d: De novo!\n", R);
        else if(0==strcmp(J1,TE))
        {
            if((0==strcmp(J2,PA)) || (0==strcmp(J2,LA)))
                printf("Caso #%d: Bazinga!\n", R);
            else if((0==strcmp(J2,PE)) || (0==strcmp(J2,SP)))
                printf("Caso #%d: Raj trapaceou!\n", R);
        }
        else if(0==strcmp(J1,PA))
        {
            if((0==strcmp(J2,PE)) || (0==strcmp(J2,SP)))
                printf("Caso #%d: Bazinga!\n", R);
            else if((0==strcmp(J2,TE)) || (0==strcmp(J2,LA)))
                printf("Caso #%d: Raj trapaceou!\n", R);
        }
        else if(0==strcmp(J1,PE))
        {
            if((0==strcmp(J2,TE)) || (0==strcmp(J2,LA)))
                printf("Caso #%d: Bazinga!\n", R);
            else if((0==strcmp(J2,PA)) || (0==strcmp(J2,SP)))
                printf("Caso #%d: Raj trapaceou!\n", R);
        }
        else if(0==strcmp(J1,LA))
        {
            if((0==strcmp(J2,PA)) || (0==strcmp(J2,SP)))
                printf("Caso #%d: Bazinga!\n", R);
            else if((0==strcmp(J2,PE)) || (0==strcmp(J2,TE)))
                printf("Caso #%d: Raj trapaceou!\n", R);
        }
        else if(0==strcmp(J1,SP))
        {
            if((0==strcmp(J2,TE)) || (0==strcmp(J2,PE)))
                printf("Caso #%d: Bazinga!\n", R);
            else if((0==strcmp(J2,PA)) || (0==strcmp(J2,LA)))
                printf("Caso #%d: Raj trapaceou!\n", R);
        }
    }
    return 0;
}


