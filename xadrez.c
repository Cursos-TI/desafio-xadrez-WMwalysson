#include <stdio.h>

int main() {
    // Movimento da torre: 5 casas para a direita 
    printf("\n### Movimento da torre ###\n ");
    for (int i = 0; i < 5; i++) {
        printf("Direta\n");
    }
    // Movimento bispo: 5 casas na diagonal para cima e a direita
    printf("\n### Movimento do bispo ###\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, direta\n");
        j++;
    }
    //Movimento rainha: 8 casas para esquerda
    printf("\n### Movimento da rainha ###\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo: 2 casas para cima e 1 para a direita
    printf("\n### Movimento do cavalo ###\n");
    for (int x  = 0; x < 2; x++) {
        printf("Cima\n");
    }
    int y = 0;
    while (y < 1 )
    {
        printf("Direita\n");
        y++;

    }
    


    return 0;
}
