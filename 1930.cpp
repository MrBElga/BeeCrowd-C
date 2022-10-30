#include <stdio.h>
 
int main() { 
    int T1, T2, T3, T4, Ttotal;

    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);
    Ttotal = (T1 + T2 + T3 + T4) - 3;
    printf("%d\n", Ttotal);

    return 0;
}
