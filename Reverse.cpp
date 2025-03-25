#include <iostream>
#include <cmath>
#include <string>

#include "Reverser.h"
int Reverser::reverseDigit(int value){
    if(value<0) return -1;
    if(value/10==0){
        return value;
    }
    int res = value%10*pow(10,floor(int(log10(value))))+reverseDigit(value/10);
    return res;
}

std::string Reverser::reverseString(std::string characters){
    if(characters.size()<=0){
        return "";
    }
    
    std::string curr=""; 
    curr = curr + characters[characters.size()-1];
    return curr+reverseString(characters.substr(0,characters.size()-1));
}
