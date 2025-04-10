#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <string>
#include <map>


using namespace std;

extern map <string,string> arr;
class Board
{
    private:
    string coordinate1, coordinate2;
    //bool choice;
    
    public:
    void getArr();
    void createBoard();
    void movingPieces();
    virtual void showChessoard()=0;

    friend class Game;
    //bool chooseColor();
};

class WhiteBoard : public Board
{
    public:
    void showChessoard();
};

class BlackBoard : public Board
{
    public:
    void showChessoard();
};



#endif //BOARD_HPP
