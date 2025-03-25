#include "Move.h"
#include <string>
#include <unordered_set>


std::string Move::getName(){
    return name;
}

std::unordered_set<std::string> Move::findWin(){
    return winConditions;
}