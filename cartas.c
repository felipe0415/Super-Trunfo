#include <stdio.h>
#include <string.h>
#include "cartas.h"

void inicializarCartas(Carta cartas[]) {
    strcpy(cartas[0].nome, "Superman");
    cartas[0].forca = 100;
    cartas[0].inteligencia = 85;
    cartas[0].velocidade = 95;
    cartas[0].resistencia = 100;

    strcpy(cartas[1].nome, "Batman");
    cartas[1].forca = 70;
    cartas[1].inteligencia = 100;
    cartas[1].velocidade = 75;
    cartas[1].resistencia = 80;

    strcpy(cartas[2].nome, "Mulher-Maravilha");
    cartas[2].forca = 95;
    cartas[2].inteligencia = 80;
    cartas[2].velocidade = 85;
    cartas[2].resistencia = 95;

    strcpy(cartas[3].nome, "Flash");
    cartas[3].forca = 65;
    cartas[3].inteligencia = 80;
    cartas[3].velocidade = 100;
    cartas[3].resistencia = 70;

    strcpy(cartas[4].nome, "Homem de Ferro");
    cartas[4].forca = 80;
    cartas[4].inteligencia = 95;
    cartas[4].velocidade = 70;
    cartas[4].resistencia = 85;

    strcpy(cartas[5].nome, "Hulk");
    cartas[5].forca = 100;
    cartas[5].inteligencia = 60;
    cartas[5].velocidade = 55;
    cartas[5].resistencia = 95;
}

void exibirCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("Força: %d\n", carta.forca);
    printf("Inteligência: %d\n", carta.inteligencia);
    printf("Velocidade: %d\n", carta.velocidade);
    printf("Resistência: %d\n", carta.resistencia);
}