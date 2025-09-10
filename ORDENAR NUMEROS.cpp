// ORDENAR NUMEROS.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numeros[] = { 34, 5, 9, 10, 8, 4, 10, 9, 15, 8, 2, 6, 1, 9, 20, 29, 9, 10, 12, 7 };
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Início da medição de tempo
    clock_t startt = clock();

    // Ordena o array
    qsort(numeros, tamanho, sizeof(int), compare);

    // Fim da medição de tempo
    clock_t stopt = clock();
    double tempo = (double)(stopt - startt) / CLOCKS_PER_SEC;

    // Mostra a sequência ordenada
    printf("Sequência ordenada:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", numeros[i]);
        if (i != tamanho - 1) {
            printf(" - ");
        }
    }
    printf("\n");

    // Mostra o tempo de execução
    printf("Tempo de ordenação: %.8f segundos\n", tempo);

    return 0;
}

