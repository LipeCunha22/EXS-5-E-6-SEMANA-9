#include <stdio.h>
//ex6 - Luis Felipe Cunha
// Função para a busca binária
int buscaBinariaRecursiva(int array[], int chave, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Se a chave estiver no meio
        if (array[meio] == chave)
            return meio;

        // Se a chave for menor que o elemento do meio, então ela deve estar na subarray esquerda
        if (array[meio] > chave)
            return buscaBinariaRecursiva(array, chave, inicio, meio - 1);

        // Caso contrário, a chave deve estar na subarray direita
        return buscaBinariaRecursiva(array, chave, meio + 1, fim);
    }

    // Se a chave não estiver presente no array
    return -1;
}

//main
int main() {
    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int chave = 23;
    int resultado = buscaBinariaRecursiva(array, chave, 0, tamanho - 1);

    if (resultado != -1)
        printf("Elemento encontrado na posição %d.\n", resultado);
    else
        printf("Elemento não encontrado no array.\n");

    return 0;
}