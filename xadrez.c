#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    //Declaração do numero inicial de casas que cada peça irá se movimentar.
    int movimentosTorre = 5;
    int movimentosBispo = 1;
    int movimentosRainha = 1;
    
    //repetições para movimentos da Torre.
    printf("-- Movimentos da Torre -- \n");
    for(int i = 0; i < movimentosTorre; i++){
        printf("Torre se movimenta uma casa para a direita. \n");
    }
    //descrição final de quantas casas a peça de movimentou.
    printf("-- numero de casas que a Torre se movimentou(%d) -- \n", movimentosTorre);
    
    //repetições para movimentos do Bispo.
    printf("-- Movimentos do Bispo -- \n");
    while(movimentosBispo < 5 ){
        movimentosBispo++;
        printf("Bispo se movimenta uma casa para a cima e uma casa para a direita. \n");
    }
    //descrição final de quantas casas a peça de movimentou.
    printf("-- numero de casas que o Bispo se movimentou(%d) -- \n", movimentosBispo);
    
    //repetições para movimentos da Rainha.
    printf("-- Movimentos da Rainha -- \n");

    do{
        movimentosRainha++;
        printf("Rainha se movimenta uma casa para a esquerda. \n");
    }while(movimentosRainha < 8);

    //descrição final de quantas casas a peça de movimentou.
    printf("-- numero de casas que a Rainha se movimentou(%d) -- \n", movimentosRainha);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
