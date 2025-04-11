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
    int choiceOfColor;

    public:
    void startGame();
    int chooseColor(); 
    void createBoardWhite();
    void createBoardBlack();
    void movingPieces();
    void showChessoard();
};
#endif //BOARD_HPP
