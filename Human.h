#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"
#include <string>

class Human: public Player {
private:
    std::string name;
public:
    Human();
    Human(std::string name);
    Move* makeMove() override;
    std::string getName() override;
};

#endif