#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Números pares entre 1 e %d:\n", numero);
    for (int i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }

    return 0;
}