#include <stdio.h>

    void recursivideLoop(int n){
        if (n > 0) {
            printf("%d ", n);
            recursivideLoop(n - 1);
            
        }
    }


int main() {
    int numero = 10;
    printf("Contagem regressiva: ");
    recursivideLoop(numero);
    printf("\n");
    return 0;
}