#include "Human.h"
#include <string>
#include <iostream>


Human::Human(): name("Human"){}

Human::Human(std::string name): name(name){}

Move* Human:: makeMove(){
    std::string newMove;
    // std::cout<<"Enter move: ";
    std::cin>> newMove;
    Move* playerMove = moveLists.selectMove(newMove);
    return playerMove;
}

std::string Human::getName(){
    return name;
}