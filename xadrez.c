#include <stdio.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
int H = 5;

        do
        {
           printf("\nDiagonal \n         Diagonal \n                  Diagonal \n                           Diagonal \n                                    Diagonal\n");
           
        } while (H != 5);
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
 int a = 0;

    while (a < 5)
    {
        printf("Direita->");
                
        a++;
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
 for (int i = 0; i < 5; i++)
    {
       printf("\nBaixo\n");
    }
    for (int i = 0; i < 5; i++)
    {
      printf("<-Esquerda");
    }

    printf("\n"); // para gerar espaco entre codigos

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
     int movimentocompleto = 1;
 
   while (movimentocompleto--)
   {
   for (int i = 0; i < 2; i++)
   {
    printf("Cima \n");
    
   }
    printf("Cima ");
    printf("Direita \n");
   }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
