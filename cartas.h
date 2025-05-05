#ifndef CARTAS_H
#define CARTAS_H

#define NUM_CARTAS 6

typedef struct {
    char nome[30];
    int forca;
    int inteligencia;
    int velocidade;
    int resistencia;
} Carta;

void inicializarCartas(Carta cartas[]);
void exibirCarta(Carta carta);

#endif