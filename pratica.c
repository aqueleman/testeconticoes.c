#include <stdio.h>



        
void moverTorre(int casas){

    if( casas > 0){
        printf("direita\n");
        moverTorre(casas - 1);
    }

}

int main() {
    int casas;
        moverTorre(5); // chama a função moverTorre com 5 casas
            int movimentocompleto = 1;
                while (movimentocompleto--) {
                    for (int i = 0; i <2; i++){
                        printf("Cavalo se movimentou cima\n");
                    } printf("Cavalo de movimentou direita\n");
                } 
                printf("\n\n");
            
                int z = 0; // inicializa o contador z
                     while ( z < 5){ // loop para movimentação do bispo
                        printf("bispo de movimento pela diagonal equerda %d\n", z); // imprime a movimentação do bispo
                    z++; // incrementa o contador z
            }printf("Bispo se movimentou 5 casas pela diagonal esquerda\n"); // imprime a movimentação final do bispo
printf("\n\n");
       
    do
        {
      printf("Torre se movimentou para cima\n"); // imprime a movimentação da torre
           
            }
         while (0); 
            printf("Torre se movimentou 1 casa para cima\n"); 
                 printf("\n\n");printf("\n\n");
        
        for( int i =0;  i < 8; i++) // mover 
            {
            printf("Rainha se movimentou para direita", i); // imprime a movimentação da rainha
                printf("\n");
            }

        return 0;
}
