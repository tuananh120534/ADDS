#include "Ninja.h"
#include <string>
#include <unordered_set>

Ninja::Ninja(){
    name = "Ninja";
    winConditions.insert("Pirate");
    winConditions.insert("Zombie");
}