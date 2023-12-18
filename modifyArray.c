#include "funcoes.h"

void modificarArray(double arr[], int tamanho) {
    printf("Modificando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] += 10.0;
    }
}
