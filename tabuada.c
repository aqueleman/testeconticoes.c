#include <stdio.h>
#include <stdlib.h>

// Imprime a tabuada de 'número' de 1 até 'limite'
void imprimir_tabuada(int número, int limite) {
    printf("\nTabuada do %d (até %d):\n", número, limite);
    for (int i = 1; i <= limite; i++) {
        printf("%2d x %2d = %3d\n", número, i, número * i);
    }
    printf("\n");
}

// Limpa o buffer de entrada em caso de erro de leitura
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        ; // descarta caracteres restantes
    }
}

int main() {
    int número, limite;
    int resultado_scan;

    // Pergunta ao usuário qual limite de multiplicação deseja usar
    printf("Defina o limite da tabuada (ex: 10): ");
    resultado_scan = scanf("%d", &limite);
    if (resultado_scan != 1 || limite <= 0) {
        printf("Entrada inválida. Usando limite padrão de 10.\n");
        limite = 10;
        limpar_buffer();
    }

    do {
        printf("Digite um número para ver a tabuada (0 para sair): ");
        resultado_scan = scanf("%d", &número);

        // Tratamento de leitura inválida
        if (resultado_scan != 1) {
            printf("Por favor, digite um valor numérico.\n");
            limpar_buffer();
            continue;
        }

        if (número != 0) {
            imprimir_tabuada(número, limite);
        }
    } while (número != 0);

    printf("Programa encerrado.\n");
    return 0;
}
