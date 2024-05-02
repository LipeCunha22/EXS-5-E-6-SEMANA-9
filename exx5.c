#include <stdio.h>
//ex 5 - Luis Felipe Cunha
// Função para reverter um número inteiro
int reverterNumero(int num, int NumeroReverso) {
    // Se o numero for 0, o reverso será 0 automaticamente
    if (num == 0){
        return NumeroReverso;}

    //Calcula o último dígito do número
    int ultimoDigito = num % 10;

    //Adiciona o último dígito no final do número reverso
    NumeroReverso = (NumeroReverso * 10) + ultimoDigito;

    //Recursao
    return reverterNumero(num / 10, NumeroReverso);
}

//main
int main() {
    int numero = 12345;
    int numeroReverso = reverterNumero(numero, 0);

    printf("O número reverso de %d é: %d\n", numero, numeroReverso);

    return 0;
}