#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->findWin().find(move2->getName())!=move1->findWin().end()) {
        return player1; 
    } else if (move2->findWin().find(move1->getName())!=move2->findWin().end()) {
        return player2; 
    } else {
        return nullptr; 
    }
    return nullptr;
}