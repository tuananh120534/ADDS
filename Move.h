#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <unordered_set>

class Move{
protected:
    std::string name;
    std::unordered_set<std::string> winConditions;
public:
    std::string getName();
    std::unordered_set<std::string> findWin();
};

#endif