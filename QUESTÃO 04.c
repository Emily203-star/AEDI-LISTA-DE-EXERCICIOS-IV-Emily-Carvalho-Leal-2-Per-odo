#include <stdio.h>

void selectionSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx])
                max_idx = j;
        }
        float temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    
    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    float notas[n];
    
    for (int i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    selectionSort(notas, n);

    printf("Notas ordenadas em ordem decrescente: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }

    return 0;
}