#include "funcoes.h"

void processarArray(double arr[], int tamanho) {
    printf("Processando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] *= arr[i];
    }
}
