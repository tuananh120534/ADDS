#include "Scissors.h"
#include <string>
#include <unordered_set>

Scissors::Scissors(){
    name = "Scissors";
    winConditions.insert("Paper");
}