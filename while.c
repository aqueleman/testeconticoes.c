#include <stdio.h>
 
int main() {

	printf("Desafio Super Trunfo");

    printf("\n\n");
	
    float pib_rj = 300.50, area_rj = 1200.25;
    int populacao_rj = 6748000, numero_de_pontos_turisticos_rj = 100;
    char inicial_rj = 'R';
	char codigo_rj[20] = "Rj1";
    char nome_rj[20] = "RiodeJaneiro";

    printf("\n\n");

    printf("nome_rj: %s\n", nome_rj);
	printf("codigo_rj: %s\n", codigo_rj);
    printf("inicial_rj: %c\n", inicial_rj);
    printf("PIB_rj: %.2f bilhoes\n", pib_rj);
    printf("área_rj: %.2f km²\n", area_rj);
    printf("número de pontos turísticos_rj: %d\n", numero_de_pontos_turisticos_rj);
    printf("população_rj: %d milhões\n", populacao_rj);

     printf("\n\n");

    float pib_sp = 699.28;
    float area_sp = 248.219;
    int populacao_sp = 45973194;
    int numero_de_pontos_turisticos_sp = 37;
    char inicial_sp = 'S';
	char codigo_sp[20] = "Sp1";
    char nome_sp[20] = "SãoPaulo"; 

    printf("nome: %s\n", nome_sp);
	printf("codigo: %s\n", codigo_sp); 
    printf("inicial: %c\n", inicial_sp);
    printf("PIB: %.2f bilhoes\n", pib_sp);
    printf("área: %.2f km²\n", area_sp);
    printf("número de pontos turísticos: %d\n", numero_de_pontos_turisticos_sp);
    printf("população: %d milhoes\n", populacao_sp);

    printf("\n\n");

            if (pib_rj > pib_sp){
                printf("PIB: Carta maior que a do adversário\n");

                } else{
                    printf("PIB: Carta menor que a do adversário\n");
                 }
            if (area_rj > area_sp){
                 printf("AREA: Carta maior que a do adversario\n");
            }else {
                printf("AREA: Carta menor que a do adversario\n");
            }
            if (numero_de_pontos_turisticos_rj > numero_de_pontos_turisticos_sp) {
                printf("NUMERO DE PONTOS TURISTICO: Carta maior que a do adversario\n");
            } else{
                printf("NUMERO DE PONTOS TURISTICO: Carta menor que a do adversario\n");
            }
            if (populacao_rj > populacao_sp)
            {
                printf("POPULAÇÃO: Carta maior que a do adversario \n");
            } else{
                printf("POPULAÇÃO: Carta menor que a do adversario\n");
            }
            
        return 0;
    }