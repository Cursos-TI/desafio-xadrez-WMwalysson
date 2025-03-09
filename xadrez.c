#include <stdio.h>

int main() {
    // Movimento da torre: 5 casas para a direta 
    printf("\n### Movimento da torre ###\n ");
    for (int i = 0; i < 5; i++) {
        printf("Direta\n");
    }
    // Movimento bispo: 5 casas na diagonal para cima e a direta
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

    return 0;
}
