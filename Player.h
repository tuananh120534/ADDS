#ifndef PLAYER_H
#define PLAYER_H
#include "MoveManager.h"

#include <string>

class Player {
protected:
    MoveManager moveLists;
public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif