#include <stdio.h>

int main() {
    int numero, i;

    do {
        printf("Digite um número para ver a tabuada (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            printf("Tabuada do %d:\n", numero);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        }

    } while (numero != 0);

    printf("Programa encerrado.\n");
    return 0;
}
