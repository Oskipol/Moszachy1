#include <iostream>
#include "board.hpp"

using namespace std;

class Game
{
    private:
    string pole1,pole2;

    public:
    virtual void moving(string &ruch1,string &ruch2)=0;
    virtual void castling() =0;
    virtual void promotion() =0;
    virtual void exchange() =0;
    virtual void enPassant() =0;
    virtual void check() =0;
    virtual void checkMate() =0;        
};

class Figure
{

};

class Pawn : public Figure
{

};