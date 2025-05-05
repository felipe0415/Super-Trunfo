#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cartas.h"

int main() {
    Carta cartas[NUM_CARTAS];
    inicializarCartas(cartas);

    srand(time(NULL));

    int jogador1 = rand() % NUM_CARTAS;
    int jogador2;
    do {
        jogador2 = rand() % NUM_CARTAS;
    } while (jogador2 == jogador1);

    printf("Carta do Jogador 1:\n");
    exibirCarta(cartas[jogador1]);

    printf("\nCarta do Jogador 2:\n");
    exibirCarta(cartas[jogador2]);

    int atributo;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Força\n2 - Inteligência\n3 - Velocidade\n4 - Resistência\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    int valor1, valor2;

    switch (atributo) {
        case 1:
            valor1 = cartas[jogador1].forca;
            valor2 = cartas[jogador2].forca;
            break;
        case 2:
            valor1 = cartas[jogador1].inteligencia;
            valor2 = cartas[jogador2].inteligencia;
            break;
        case 3:
            valor1 = cartas[jogador1].velocidade;
            valor2 = cartas[jogador2].velocidade;
            break;
        case 4:
            valor1 = cartas[jogador1].resistencia;
            valor2 = cartas[jogador2].resistencia;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    printf("\nResultado:\n");
    if (valor1 > valor2) {
        printf("%s vence!\n", cartas[jogador1].nome);
    } else if (valor2 > valor1) {
        printf("%s vence!\n", cartas[jogador2].nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}