#include <iostream>
#include "board.hpp"
#include "game.hpp"

using namespace std;

void Game::moving(string &ruch1,string &ruch2)
{    
}

Pawn::Pawn(string place,bool coloor){
    pole=place;
    color=coloor;
    if(color )
    {
     name="[P]";   
    }
    else 
    {
        name="[p]";
    }
}

Queen::Queen(string place,bool coloor){
    pole=place;
    color=coloor;
    if(color )
    {
     name="[Q]";   
    }
    else 
    {
        name="[q]";
    }
}

Knight::Knight(string place,bool coloor){
    pole=place;
    color=coloor;
    if(color )
    {
     name="[N]";   
    }
    else 
    {
        name="[n]";
    }
}

Bishop::Bishop(string place,bool coloor){
    pole=place;
    color=coloor;
    if(color )
    {
     name="[B]";   
    }
    else 
    {
        name="[b]";
    }
}

King::King(string place,bool coloor){
    pole=place;
    color=coloor;
    if(color )
    {
     name="[K]";   
    }
    else 
    {
        name="[k]";
    }
}

Rook::Rook(string place,bool coloor){
    pole=place;
    color=coloor;
    if(color )
    {
     name="[R]";   
    }
    else 
    {
        name="[r]";
    }
}

 string Figure::get_name()const{
     return name;
 }


 void Figure::set_pole(string &place)
 {
    pole=place;

 }

