#include "Zombie.h"
#include <string>
#include <unordered_set>

Zombie::Zombie(){
    name = "Zombie";
    winConditions.insert("Pirate");
    winConditions.insert("Monkey");
}