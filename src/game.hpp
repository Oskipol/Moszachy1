#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include "board.hpp"

using namespace std;

class Game
{
    private:
    string pole1,pole2;

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
protected:
    int id;
    string name, pole;
    bool color;

public:
void wayOfMoving();
void set_color(bool &col);
string get_name();
void set_pole(string &place);

};

class Pawn : public Figure
{
    public:
    Pawn(string place);
    
    void wayOfMoving();
};

class Queen : public Figure
{
    public:
    void wayOfMoving();
};

class Knight : public Figure
{
    public:
    void wayOfMoving();
};

class Bishop : public Figure
{
    public:
    void wayOfMoving();
};

class King : public Figure
{
    public:
    void wayOfMoving();
};

class Rook : public Figure
{
    public:
    void wayOfMoving();
};

#endif //GAME_HPP