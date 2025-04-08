#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "board.hpp"

using namespace std;

class Game
{
    private:
    string pole1,pole2;

    friend class Board;

    public:
    void moving(string &ruch1,string &ruch2);
    void castling();
    void promotion();
    void exchange();
    void enPassant();
    void check();
    void checkMate();
};

class Figure:public Game
{
    public:
    void wayOfMoving();
    void set_color(bool &col);
    string get_name()const;
    void set_pole(string &place);
protected:
    int id;
    string name, pole;
    bool color;


};

class Pawn : public Figure
{
    public:

    Pawn(string place,bool coloor);
    
    void wayOfMoving();
};

class Queen : public Figure
{
    public:
    Queen(string place,bool coloor);

    void wayOfMoving();
};

class Knight : public Figure
{
    public:
    Knight(string place,bool coloor);

    void wayOfMoving();
};

class Bishop : public Figure
 {
    public:
    Bishop(string place,bool coloor);
    void wayOfMoving();
};

class King : public Figure
{
    public:
    King(string place,bool coloor);
    void wayOfMoving();
};

class Rook : public Figure
{
    public:
    Rook(string place,bool coloor);
    void wayOfMoving();
};

class Empty
{

};


#endif //GAME_HPP