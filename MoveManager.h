#ifndef MOVEMANAGER_H
#define MOVEMANAGER_H

#include "Move.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Robot.h"
#include "Ninja.h"
#include "Paper.h"
#include <unordered_map>
#include <string>

class MoveManager {
private:
    Rock rock;
    Paper paper;
    Scissors scissors;
    Zombie zombie;
    Pirate pirate;
    Ninja ninja;
    Robot robot;
    Monkey monkey;
    std::unordered_map<std::string,Move*> moveList;
public:
    MoveManager();
    Move* selectMove(std::string selection);
};

#endif