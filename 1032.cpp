#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_PRIMOS 3502

int primos[MAX_PRIMOS];

// Função que verifica se um número é primo
bool ePrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;  // 2 é o único número par primo
    if (num % 2 == 0) return false;  // Elimina números pares
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;  // Se for divisível por algum número ímpar
    }
    return true;
}

// Função que preenche o array de primos até o limite
void preencherPrimos() {
    memset(primos, 0, sizeof(primos));
    int contador = 0;
    for (int i = 2; i < 32650 && contador < MAX_PRIMOS; i++) {
        if (ePrimo(i)) {
            primos[contador++] = i;
        }
    }
}

// Função para resolver o problema de Josephus modificado com primos
int josephusModificado(int numPessoas) {
    int resultado = 0;
    for (int i = 1; i <= numPessoas; i++) {
        resultado = (resultado + primos[numPessoas - i]) % i;
    }
    return resultado;
}

int main() {
    int n;

    // Preencher o array com números primos
    preencherPrimos();

    // Continuar recebendo entradas até que o número seja 0
    while (true) {
        scanf("%d", &n);
        if (n == 0) break;  // Encerrar se a entrada for 0
        printf("%d\n", josephusModificado(n) + 1);  // Adiciona 1 para ajustar o índice
    }

    return 0;
}

