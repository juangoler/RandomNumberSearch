#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[10], numero, encontrado = 0;

    srand(time(NULL));
    printf("Números sorteados:\n");
    for(int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100;  // Sorteia números de 0 a 99
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Digite um número para buscar no vetor: ");
    scanf("%d", &numero);

    for(int i = 0; i < 10; i++) {
        if(numeros[i] == numero) {
            printf("Número %d encontrado na posição %d.\n", numero, i);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Número %d não encontrado no vetor.\n", numero);
    }

    return 0;
}
