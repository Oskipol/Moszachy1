#include <iostream>
#include "board.hpp"
#include "game.hpp"

using namespace std;

void Game::moving(string &ruch1,string &ruch2)
{
    
    //Dla ruchu 1 
    auto it = arr.find(ruch1);
    
}

Pawn::Pawn(string place){
    pole=place;
}

string Figure::get_name(){
    return name;
}
void Figure::set_color(bool &col){
    color=col;
}
