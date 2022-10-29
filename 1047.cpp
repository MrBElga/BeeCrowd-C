#include <stdio.h>
int main (){
    int n1, n2, n3, n4, h, m;
    scanf("%i %i %i %i", &n1, &n3, &n2, &n4);
    
    h = n2-n1;
    m = n4-n3;
    
    if (!h && m <= 0)
        h = 24;
    
    if (h < 0)
        h += 24;
    
    if (m < 0) {
        h--;
        m += 60;
    }
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", h, m);
    return 0;
}
