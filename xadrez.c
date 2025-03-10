#include <stdio.h>

// Movimento da torre: movendo para a direita

    void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}


// Movimento da Rainha (mover para a esquerda)
    void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}



// Movimento do Bispo: na diagonal superior direita
    void moverBispo(int casas, int atual) {
    if (atual < casas) {
        
        printf("Cima, Direita\n");
        moverBispo(casas, atual + 1);
    }
}

// Movimento do Bispo com loops aninhados
    void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j <= i; j++) {
            printf("Cima, Direita\n");
      
        }
    }
}

// Movimento do Cavalo usando loops aninhados e controle de fluxo
    void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        int passos = 0;
        for (int j = 0; j < 2; j++) { // O cavalo move-se 2 passos em uma direção
            printf("Cima\n");
            passos++;
        }
        printf("Direita\n"); // O cavalo então move-se 1 passo em direção perpendicular
        printf(" --- Movimento completo do cavalo ---\n");

    }

}

int main() {
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    int movimentoCavalo = 3;



    // Movimento da Torre
    printf("\n### Movimento da Torre ###\n");
    moverTorre(movimentoTorre);

    // Movimento do Bispo (recursivo)
    printf("\n### Movimento do Bispo (recursivo) ###\n");
    moverBispo(movimentoBispo, 0);

    // Movimento do Bispo (loops aninhados)
    printf("\n### Movimento do Bispo (loops aninhados) ###\n");
    moverBispoLoops(movimentoBispo);

    // Movimento da Rainha
    printf("\n### Movimento da Rainha ###\n");
    moverRainha(movimentoRainha);


    // Movimento do Cavalo
    printf("\n### Movimento do Cavalo ###\n");
    moverCavalo(movimentoCavalo);





    return 0;
}
