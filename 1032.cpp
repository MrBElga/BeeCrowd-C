#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_PRIMOS 3502

int primos[MAX_PRIMOS];

bool ePrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; 
    if (num % 2 == 0) return false;  
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;  
    }
    return true;
}

void preencherPrimos() {
    memset(primos, 0, sizeof(primos));
    int contador = 0;
    for (int i = 2; i < 32650 && contador < MAX_PRIMOS; i++) {
        if (ePrimo(i)) {
            primos[contador++] = i;
        }
    }
}

int josephusModificado(int numPessoas) {
    int resultado = 0;
    for (int i = 1; i <= numPessoas; i++) {
        resultado = (resultado + primos[numPessoas - i]) % i;
    }
    return resultado;
}

int main() {
    int n;

    preencherPrimos();

    while (true) {
        scanf("%d", &n);
        if (n == 0) break;  
        printf("%d\n", josephusModificado(n) + 1);  
    }

    return 0;
}

