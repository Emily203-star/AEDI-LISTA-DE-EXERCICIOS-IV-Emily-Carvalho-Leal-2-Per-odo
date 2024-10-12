#include <stdio.h>

void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    
    printf("Digite o número de produtos: ");
    scanf("%d", &n);

    float precos[n];
    
    for (int i = 0; i < n; i++) {
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    insertionSort(precos, n);

    printf("Preços ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }

    return 0;
}