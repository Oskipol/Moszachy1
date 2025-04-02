#include <iostream>
#include "board.hpp"

using namespace std;

class Game
{
    public:

    virtual void castling() =0;
    virtual void promotion() =0;
    virtual void exchange() =0;
    virtual void enPassant() =0;
    virtual void castling() =0;
    virtual void check() =0;
    virtual void checkMate() =0;
    
    
};