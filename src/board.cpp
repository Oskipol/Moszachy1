#include <iostream>
#include <map>
#include <string>
#include "board.hpp"
#include "game.hpp"
#include <vector>
using namespace std;

 map <string,string> arr = {{"A1", "[R]"},{"B1", "[N]"},{"C1", "[B]"},{"D1", "[K]"},{"E1", "[Q]"},{"F1","[B]"},{"G1", "[N]"},{"H1", "[R]"},
{"A8", "[r]"},{"B8", "[n]"},{"C8", "[b]"},{"D8", "[q]"},{"E8", "[k]"},{"F8","[b]"},{"G8", "[n]"},{"H8", "[r]"}};


void Board::createBoard()
{ 
vector<Pawn> pawns;
for(int i=3;i<7;i++)
{
   for(int j=65;j<73;j++)
   {
      string k={char(j),static_cast<char>(i+'0')};
      arr.insert({k,"[ ]"});
   }
}
 for(int i=65;i<73;i++)
 {
   string k={char(i), '2'};
   pawns.push_back(i+1);
   pawns[i+1].set_color(false);
   arr.insert({k, pawns[i+1].get_name()});
 }

 for(int i=65;i<73;i++)
 {
    string k={char(i), '7'};
    arr.insert({k, "[p]"});
 }
}

void WhiteBoard::showChessoard()
{
   
for(int i=8;i>0;i--)
{
  cout<<endl;
   for(int j=73;j>65;j--)
   {
      string k={char(j), static_cast<char>(i+'0')};
      cout<<arr[k];
   }
}
}

void BlackBoard::showChessoard()
{
   for(int i=0;i<9;i++)
{
  cout<<endl;
   for(int j=65;j<73;j++)
   {
      string k={char(j), static_cast<char>(i+'0')};
      cout<<arr[k];
   }
}
}

void Board::movingPieces()
{

    cout<<"\nWhich piece would you like to move from: ";
    cin>>coordinate1;
    cout<<endl;
    cout<<"Where would you like to move this piece to: ";
    cin>>coordinate2;

    arr[coordinate2]=arr[coordinate1];
    arr[coordinate1]="[ ]";

    showChessoard();

}

void Board::getArr()
{
   for(int i=0;i<arr.size();i++)
   {
      
   }
}
