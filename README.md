# Super Trunfo - Heróis de Quadrinhos

Este é um projeto em linguagem C que simula uma partida de cartas do tipo Super Trunfo, com heróis como Superman, Batman e outros.

## Como funciona

- Duas cartas são sorteadas aleatoriamente.
- O usuário escolhe um atributo para comparar (força, inteligência, etc).
- O programa informa qual carta venceu com base no atributo escolhido.

## Estrutura

- `main.c`: ponto de entrada e lógica principal.
- `cartas.h` e `cartas.c`: definição e inicialização das cartas.

## Como compilar

```bash
gcc main.c cartas.c -o supertrunfo
./supertrunfo
```

## Requisitos

- Compilador C (ex: GCC)
- Terminal Linux/macOS ou CMD/PowerShell (Windows)