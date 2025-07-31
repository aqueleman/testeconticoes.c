#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n\n");

    float pib_rj = 300.50, pib_sp = 699.28;
    float area_rj = 1200.25, area_sp = 248.219;
    int populacao_rj = 6748000, populacao_sp = 45973194;
    int numero_de_pontos_turisticos_rj = 100, numero_de_pontos_turisticos_sp = 37;

    char continuar = 's';
    int escolha;

    while (continuar == 's' || continuar == 'S') {
        printf("\nEscolha o atributo para comparar:\n");
        printf("1 - PIB\n");
        printf("2 - Área\n");
        printf("3 - Número de pontos turísticos\n");
        printf("4 - População\n");
        printf("Digite o número da opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("PIB RJ: %.2f | PIB SP: %.2f\n", pib_rj, pib_sp);
                if (pib_rj > pib_sp)
                    printf("PIB: Carta do RJ é maior!\n");
                else
                    printf("PIB: Carta do SP é maior!\n");
                break;
            case 2:
                printf("Área RJ: %.2f | Área SP: %.2f\n", area_rj, area_sp);
                if (area_rj > area_sp)
                    printf("Área: Carta do RJ é maior!\n");
                else
                    printf("Área: Carta do SP é maior!\n");
                break;
            case 3:
                printf("Pontos turísticos RJ: %d | SP: %d\n", numero_de_pontos_turisticos_rj, numero_de_pontos_turisticos_sp);
                if (numero_de_pontos_turisticos_rj > numero_de_pontos_turisticos_sp)
                    printf("Pontos turísticos: Carta do RJ é maior!\n");
                else
                    printf("Pontos turísticos: Carta do SP é maior!\n");
                break;
            case 4:
                printf("População RJ: %d | SP: %d\n", populacao_rj, populacao_sp);
                if (populacao_rj > populacao_sp)
                    printf("População: Carta do RJ é maior!\n");
                else
                    printf("População: Carta do SP é maior!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("Obrigado por jogar!\n");
    return 0;
}