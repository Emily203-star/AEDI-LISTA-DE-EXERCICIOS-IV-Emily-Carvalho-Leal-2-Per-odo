#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int buscaBinaria(int arr[], int n, int valor) {
    int inicio = 0, fim = n - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == valor)
            return meio;
        if (arr[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1;
}

int main() {
    int n, valor, resultado;

    printf("Digite o número de elementos da lista: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n); // Ordena a lista para a busca binária

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    resultado = buscaBinaria(arr, n, valor);

    if (resultado != -1)
        printf("Valor encontrado na posição %d\n", resultado);
    else
        printf("Valor não encontrado\n");

    return 0;
}