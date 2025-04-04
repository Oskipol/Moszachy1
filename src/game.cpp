#include <iostream>
#include "board.hpp"
#include "game.hpp"

using namespace std;

void Game::moving(string ruch1,string ruch2)
{
    
    //Dla ruchu 1 
    auto it = arr.find(ruch1);
    
}

string Figure::get_name()const{
    return name;
}
void Figure::set_color(bool c){
    color=c;
}
Pawn::Pawn(int idd){
    id=idd;
    if(!color) name="[P]";
    else name="[p]";
}