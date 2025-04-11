#include <iostream>
#include <map>
#include <string>
#include "board.hpp"
#include "game.hpp"

using namespace std;
// White pawns
Pawn P1("A2", 1);
Pawn P2("B2", 1);
Pawn P3("C2", 1);
Pawn P4("D2", 1);
Pawn P5("E2", 1);
Pawn P6("F2", 1);
Pawn P7("G2", 1);
Pawn P8("H2", 1);


// Black pawns
Pawn p1("A7", 0);
Pawn p2("B7", 0);
Pawn p3("C7", 0);
Pawn p4("D7", 0);
Pawn p5("E7", 0);
Pawn p6("F7", 0);
Pawn p7("G7", 0);
Pawn p8("H7", 0);

//White Figures
Rook R1("A1",1);
Rook R2("H1",1);
Knight N1("B1",1);
Knight N2("G1",1);
Bishop B1("C1",1);
Bishop B2("F1",1);
Queen Q1("D1",1);
King K1("E1",1);

//Black Figures
Rook r1("A8",0);
Rook r2("H8",0);
Knight n1("B8",0);
Knight n2("G8",0);
Bishop b1("C8",0);
Bishop b2("F8",0);
Queen q1("D8",0);
King k1("E8",0);

 Empty e1;


// Map of positions to figures
map<string, Figure*> arr = {
    {"A2", &P1}, {"B2", &P2}, {"C2", &P3}, {"D2", &P4},
    {"E2", &P5}, {"F2", &P6}, {"G2", &P7}, {"H2", &P8},
    {"A7", &p1}, {"B7", &p2}, {"C7", &p3}, {"D7", &p4},
    {"E7", &p5}, {"F7", &p6}, {"G7", &p7}, {"H7", &p8},

    {"A1", &R1}, {"H1", &R2}, {"A8", &r1}, {"H8", &r2},
    {"B1", &N1}, {"G1", &N2}, {"B8", &n1}, {"G8", &n2},
    {"C1", &B1}, {"F1", &B2}, {"C8", &b1}, {"F8", &b2},
    {"D1", &Q1}, {"E1", &K1}, {"D8", &q1}, {"E8", &k1},
    
    
};

int Board::chooseColor()
{
    cout << "Jakim kolorem chcesz grac?" << endl;
    cout << "1. Biale" << endl;
    cout << "2. Czarne" << endl;

    cin >> choiceOfColor;
    if (choiceOfColor != 1 && choiceOfColor != 2)
    {
        cout << "Nie ma takiej opcji. Wybierz 1 lub 2." << endl;
        return false; // Invalid choice
    }

    return choiceOfColor;
}

void Board::createBoardWhite()
{
    //dla bialych
    for (char row = '8'; row >= '1'; --row)
    {
        for (char col = 'A'; col <= 'H'; ++col)
        {
            string position = string(1, col) + row;
            if (arr.find(position) != arr.end())
            {
                cout << arr[position]->get_name() << " ";
            }
            else
            {
                cout << "[ ] "; // Empty square
            }
        }
        cout << endl;
    }
}
void Board::createBoardBlack()
{
    //dla czarnuchow
    for (char row = '1'; row <= '8'; ++row)
    {
        for (char col = 'H'; col >= 'A'; --col)
        {
            string position = string(1, col) + row;
            if (arr.find(position) != arr.end())
            {
                cout << arr[position]->get_name() << " ";
            }
            else
            {
                cout << "[ ] "; // Empty square
            }
        }
        cout << endl;
    }
}

void Board::startGame()
{
    int wybor=chooseColor();
    switch (wybor)
    {
    case 1 :
//DLA BIALYCH
createBoardWhite();
        break;
    case 2 :
//DLA CZARNUCHOW
    createBoardBlack();
    default:
        break;
    }

}

void Board::movingPieces()
{
    Empty e1;
    cout<<"Which chess field would you like to move from? ";
    cin>>coordinate1;
    cout<<"Which chess field would you like to move it to? ";
    cin>>coordinate2;
    
    arr[coordinate1]->set_pole(coordinate2);
    arr[coordinate2]=arr[coordinate1];
    arr[coordinate1] =e1; 
    createBoardWhite();
    
}