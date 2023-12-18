#include "/home/pedro/Área de Trabalho/técnicas de software livre/funcoes.h"

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
