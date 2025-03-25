#include "Computer.h"
#include <string>
#include <iostream>


Computer::Computer(): name("Computer"){}

Move* Computer:: makeMove(){
    std::string newMove = "Rock";
    Move* playerMove = moveLists.selectMove(newMove);
    return playerMove;
}

std::string Computer::getName(){
    return name;
}