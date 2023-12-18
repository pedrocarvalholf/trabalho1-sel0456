#include "funcoes.h"

void imprimirArray(double arr[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}
