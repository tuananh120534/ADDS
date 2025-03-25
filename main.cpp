#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"
using namespace std;
#include<iostream>
int main(){
    Human human("anh");
    Computer comp;
    cout<<comp.getName();
    cout<<human.getName();
    Referee ref;
    Player* winner = ref.refGame(&human,&comp);
    if (winner == nullptr) {
        cout << "It's a Tie." << endl;
    } else {
        cout << winner->getName() << " Wins." << endl;
    }
    return 0;
}