#include "Monkey.h"
#include <string>
#include <unordered_set>

Monkey::Monkey(){
    name = "Monkey";
    winConditions.insert("Ninja");
    winConditions.insert("Robot");
}