#include "Robot.h"
#include <string>
#include <unordered_set>

Robot::Robot(){
    name = "Robot";
    winConditions.insert("Ninja");
    winConditions.insert("Zombie");
}