#include "MoveManager.h"
#include <iostream>

MoveManager::MoveManager(){
    moveList["Rock"] = &rock;
    moveList["Paper"] = &paper;
    moveList["Scissors"] = &scissors;
    moveList["Monkey"] = &monkey;
    moveList["Robot"] = &robot;
    moveList["Pirate"] = &pirate;
    moveList["Zombie"] = &zombie;
    moveList["Ninja"] = &ninja;
}

Move* MoveManager::selectMove(std::string selection){
    while(moveList.find(selection)==moveList.end()){
        std::cout<<"Bad Choice"<<std::endl;
        std::cout<<"Enter Valide Move: "<<std::endl;
        std::cin>>selection;
    }
    return moveList[selection];
}