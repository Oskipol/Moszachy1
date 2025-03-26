#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <string>

using namespace std;

class Board
{
    private:
    string coordinate1, coordinate2;
    
    public:
    void createBoard();
    void movingPieces();
    
};

#endif //BOARD_HPP
