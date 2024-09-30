// 2- 

#include <stdio.h>

int Fibonacci(int num) {
    int a = 0, b = 1, proximo;

    if (num == 0 || num == 1) {
        return 1; // Pertence à sequência
    }
    while (b <= num) {
        proximo = a + b;
        a = b;
        b = proximo;

        if (b == num) {
            return 1;
        }
    }
    return 0; // Não pertence à sequência
}

int main() {
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (Fibonacci(numero)) {
        printf("O número %d pertence a sequência!\n", numero);
    } else {
        printf("O número %d NÃO pertence a sequência!\n", numero);
    }
    return 0;
}
