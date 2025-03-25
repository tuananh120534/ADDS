#include "Pirate.h"
#include <string>
#include <unordered_set>

Pirate::Pirate(){
    name = "Pirate";
    winConditions.insert("Robot");
    winConditions.insert("Monkey");
}