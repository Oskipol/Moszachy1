#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <string>

using namespace std;

class Board
{
    private:
    string coordinate1, coordinate2;
    bool choice;
    
    public:
    void createBoard();
    void movingPieces();
    bool chooseColor();
    void showChessoard();
    
};

#endif //BOARD_HPP
