#include <stdio.h>

void jokenpo(char player1, char player2);

int main() {
    char player1, player2;
    scanf(" %c", &player1);
    scanf(" %c", &player2);
    jokenpo(player1, player2);
    return 0;
}

void jokenpo(char player1, char player2) {
    if (player1 == player2) {
        printf("empate\n");
    } else if ((player1 == 'R' && player2 == 'S') ||(player1 == 'S' && player2 == 'P') ||(player1 == 'P' && player2 == 'R')) {
        printf("jog1\n");
    } else {
        printf("jog2\n");
    }
}