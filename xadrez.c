#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
     //Declaração do numero de casas que cada peça irá se movimentar.
    int totalDeMovimentosTorre = 5;
    int totalDeMovimentosBispo = 5;
    int totalDeMovimentosRainha = 8;
    
    //repetições para movimentos da Torre.
    printf("-- Movimentos da Torre -- \n");
    for(int i = 0; i < totalDeMovimentosTorre; i++){
        printf("Torre se movimenta uma casa para a direita. \n");
    }
    printf("-- numero de casas que a Torre se movimentou(%d) -- \n", totalDeMovimentosTorre);
    
    //repetições para movimentos do bispo.
    printf("-- Movimentos do Bispo -- \n");
    int movimentoBispo = 0;
    while(movimentoBispo < totalDeMovimentosBispo ){
        movimentoBispo++;
        printf("Bispo se movimenta uma casa para a cima e uma casa para a direita. \n");
    }
    printf("-- numero de casas que o Bispo se movimentou(%d) -- \n", totalDeMovimentosBispo);
    
    //repetições para movimentos da rinha.
    printf("-- Movimentos da Rainha -- \n");
    int movimentoRainha = 0;
    do{
        movimentoRainha++;
        printf("Rainha se movimenta uma casa para a esquerda. \n");
    }while(movimentoRainha< totalDeMovimentosRainha);
    printf("-- numero de casas que a Rainha se movimentou(%d) -- \n", totalDeMovimentosRainha);
    
 
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
