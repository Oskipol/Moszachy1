#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Board
{
    friend class Game;
    
    protected:
    string coordinate1, coordinate2;
    bool choiceOfColor;

    public:
    bool chooseColor(bool choiceOfColor); 
    void createBoard();
    void movingPieces();
    void showChessoard();
};
#endif //BOARD_HPP
