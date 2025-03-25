#include <stdio.h>

int main()
{
    char *linhas[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com zeros (isso so prepara o tabuleiro com 0 ele nao aparece em cima das letra pq n dei um print f)
    for (int i = 0; i < 10; i++) // serve pra começar a linha com um 0
    {
        for (int j = 0; j < 10; j++) // serve pra completar a linha com  0 depois o i recomeça e faz outar linha com 0
        {
            tabuleiro[j][i] = 0; // Isso serve para definir que cada posição específica por exemplo tem que começar em 0 pra ser a agua da batalha naval, pode muda isso pra 3 4 pra ser o navio depois mas no começo tem que ser 0
        }
    }

    // Coloca o navio onde voce quer horizontalmente ou seja no i
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;

    // isso pra vertical ou seja pro j
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;

    // Imprime o cabeçalho com as letras
    printf("   ");               // isso da um espaço pro a fica em cima do 0 e nao do 1
    for (int i = 0; i < 10; i++) // aqui imprime o A até o J em uma linha reta
    {
        printf("%s ", linhas[i]); // coloca o i pq ele que ta imprimindo tudo ali em cima
    }
    printf("\n");

    for (int i = 0; i < 10; i++) // imprime os numeros de 1 até 10 do lado do tabuleiro ta 1 e 11 ali pq se tiver 0 começa no 0 e vai até o 9 se tiver 1 começa no 1 e vai até o 9  mas se tiver 1 e 11 vai do 1 a 10
    {
        printf("%2d ", i + 1); // aq imprime os numeros de 1 a 10 tem um %2d pra alinhar os numeros e fica bonito

        for (int j = 0; j < 10; j++) // ele vai imprimir 10 vezes o número 0, do lado de 1 2 3 etc
        {
            printf("%d ", tabuleiro[i][j]); // aqui imprime os navios
        }
        printf("\n");
    }

    return 0;
}
