#include <bits/stdc++.h>


int calcula(int n, int k) {
    int nMorre = 0; 
    
    for (int i = 2; i <= n; i++) {
        nMorre = (nMorre + k) % i;
    }
    
    return nMorre + 1; 
}

int main() {
    int NC; 
    scanf("%d", &NC);

    for (int caso = 1; caso <= NC; caso++) {
        int n, k, nMorre;
        
        scanf("%d %d", &n, &k);  
        nMorre = calcula(n, k);  
        printf("Case %d: %d\n", caso, nMorre);
    }

    return 0;
}

