#include <stdio.h>

#define TAMANHO_MAX 100

// Funções
void processarArray(double arr[], int tamanho);
void imprimirArray(double arr[], int tamanho);
void modificarArray(double arr[], int tamanho);

int main() {
    double meuArray[TAMANHO_MAX] = {1.5, 2.0, 3.7, 4.2, 5.1};
    int tamanhoArray = 5;

    printf("Array Original:\n");
    imprimirArray(meuArray, tamanhoArray);

    // Processamento do array
    processarArray(meuArray, tamanhoArray);

    printf("\nArray após Processamento:\n");
    imprimirArray(meuArray, tamanhoArray);

    // Modificação do array
    modificarArray(meuArray, tamanhoArray);

    printf("\nArray após Modificação:\n");
    imprimirArray(meuArray, tamanhoArray);

    return 0;
}

// Função para processar o array (por exemplo, elevar ao quadrado)
void processarArray(double arr[], int tamanho) {
    printf("Processando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] *= arr[i];
    }
}

// Função para imprimir o array
void imprimirArray(double arr[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

// Função para modificar o array (por exemplo, adicionar 10 a cada elemento)
void modificarArray(double arr[], int tamanho) {
    printf("Modificando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] += 10.0;
    }
}
#include <stdio.h>

#define TAMANHO_MAX 100

// Funções
void processarArray(double arr[], int tamanho);
void imprimirArray(double arr[], int tamanho);
void modificarArray(double arr[], int tamanho);

int main() {
    double meuArray[TAMANHO_MAX] = {1.5, 2.0, 3.7, 4.2, 5.1};
    int tamanhoArray = 5;

    printf("Array Original:\n");
    imprimirArray(meuArray, tamanhoArray);

    // Processamento do array
    processarArray(meuArray, tamanhoArray);

    printf("\nArray após Processamento:\n");
    imprimirArray(meuArray, tamanhoArray);

    // Modificação do array
    modificarArray(meuArray, tamanhoArray);

    printf("\nArray após Modificação:\n");
    imprimirArray(meuArray, tamanhoArray);

    return 0;
}

// Função para processar o array (por exemplo, elevar ao quadrado)
void processarArray(double arr[], int tamanho) {
    printf("Processando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] *= arr[i];
    }
}

// Função para imprimir o array
void imprimirArray(double arr[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

// Função para modificar o array (por exemplo, adicionar 10 a cada elemento)
void modificarArray(double arr[], int tamanho) {
    printf("Modificando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] += 10.0;
    }
}
#include <stdio.h>

#define TAMANHO_MAX 100

// Funções
void processarArray(double arr[], int tamanho);
void imprimirArray(double arr[], int tamanho);
void modificarArray(double arr[], int tamanho);

int main() {
    double meuArray[TAMANHO_MAX] = {1.5, 2.0, 3.7, 4.2, 5.1};
    int tamanhoArray = 5;

    printf("Array Original:\n");
    imprimirArray(meuArray, tamanhoArray);

    // Processamento do array
    processarArray(meuArray, tamanhoArray);

    printf("\nArray após Processamento:\n");
    imprimirArray(meuArray, tamanhoArray);

    // Modificação do array
    modificarArray(meuArray, tamanhoArray);

    printf("\nArray após Modificação:\n");
    imprimirArray(meuArray, tamanhoArray);

    return 0;
}

// Função para processar o array (por exemplo, elevar ao quadrado)
void processarArray(double arr[], int tamanho) {
    printf("Processando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] *= arr[i];
    }
}

// Função para imprimir o array
void imprimirArray(double arr[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

// Função para modificar o array (por exemplo, adicionar 10 a cada elemento)
void modificarArray(double arr[], int tamanho) {
    printf("Modificando Array...\n");
    for (int i = 0; i < tamanho; ++i) {
        arr[i] += 10.0;
    }
}
