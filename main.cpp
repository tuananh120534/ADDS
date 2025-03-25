#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human humanPlayer("Mei");
    Computer computerPlayer;
    Referee referee;

    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner == nullptr) {
        std::cout << "It's a Tie." << std::endl;
    } else {
        std::cout << winner->getName() << " Wins." << std::endl;
    }

    return 0;
}
