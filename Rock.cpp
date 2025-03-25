#include "Rock.h"
#include <string>
#include <unordered_set>

Rock::Rock(){
    name = "Rock";
    winConditions.insert("Scissors");
}