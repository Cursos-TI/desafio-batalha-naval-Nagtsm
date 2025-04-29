#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};


    for (int i = 0; i <10; i++)
    {
        for (int j = 0; j <10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }


    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    tabuleiro[9][9] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[7][7] = 3;

    // ====== Habilidades ======

    // matrizes de habilidade
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    
    for (int i = 0; i < 5; i++) // linha
    {
        for (int j = 0; j < 5; j++) // coluna
        {
            if (j >= 2 - i && j <= 2 + i) // Forma do cone
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 2 || j == 2) // Linha do meio ou coluna do meio
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            
            if ((i == 0 && j == 2) ||
                (i == 1 && (j == 1 || j == 2 || j == 3)) ||
                (i == 2) ||
                (i == 3 && (j == 1 || j == 2 || j == 3)) ||
                (i == 4 && j == 2)) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    
    int origem_linha = 4;
    int origem_coluna = 4;

    // Aplicar a habilidade 
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            int tab_linha = origem_linha - 2 + i; 
            int tab_coluna = origem_coluna - 2 + j;

            if (tab_linha >= 0 && tab_linha < 10 && tab_coluna >= 0 && tab_coluna < 10) 
            {
                if (cone[i][j] == 1 && tabuleiro[tab_linha][tab_coluna] == 0) 
                {
                    tabuleiro[tab_linha][tab_coluna] = 5; 
                }
            }
        }
    }

   


    printf("   "); 
    for (int i = 0; i <10; i++)
    {
            printf("%c ", letras[i]);
    }
    printf("\n");
    
    for (int i = 0; i <10; i++)
    {
        printf("%2d ", i + 1); // Número da linha (de 1 até 10) nao ta ligado ao vetor é so pra indicar.

        for (int j = 0; j <10; j++)
        {
            printf("%2d", tabuleiro[i][j]); // aq sim ta ligado ao vetor.
        }
        printf("\n");
        
    }
    
    
// erros cometidos nao coloquei \n apos as letras ai o 0 ficava junto e nao coloquei \n depois do ciclo de cada 
// i dai os 0 ficavam um do lado do outro, e pelo visto, tambem nao soube colocar a numeração de 1 a 10 no canto 
    return 0;
}