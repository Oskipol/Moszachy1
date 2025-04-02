#include <iostream>
#include <map>
#include <string>
#include "board.hpp"

using namespace std;

map <string,string> arr = {{"A1", "[R]"},{"B1", "[N]"},{"C1", "[B]"},{"D1", "[K]"},{"E1", "[Q]"},{"F1","[B]"},{"G1", "[N]"},{"H1", "[R]"},
{"A8", "[r]"},{"B8", "[n]"},{"C8", "[b]"},{"D8", "q]"},{"E8", "[k]"},{"F8","[b]"},{"G8", "[n]"},{"H8", "[r]"}};

void Board::createBoard()
{
 int choice;
 cout<<"Which pieces would you like to play?"<<endl;
 cout<<"1.White"<<endl;
 cout<<"2.Black"<<endl;
 cout<<"3.Random"<<endl;
 cout<<"Your choice:"; cin>>choice;


for(int i=3;i<6;i++)
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
    arr.insert({k, "P"});
 }

 for(int i=65;i<73;i++)
 {
    string k={char(i), '7'};
    arr.insert({k, "p"});
 }
 
 switch (choice){
 case 1://Dla bialych
 cout<<"You re playing White!"<<endl;

 for(int i=0;i<8;i++)
 {
   cout<<endl;
    for(int j=65;j<73;j++)
    {
       string k={char(j), static_cast<char>(i+'0')};
       cout<<arr[k];
       //cout<<k;
    }
 }
 
 


break;

case 2://Dla czarnych 
cout<<"You re playing black!"<<endl;

break;
//DOKLEIC WERSJE DLA RANDOM 
}
}


void Board::movingPieces()
{

    cout<<"Which piece would you like to move from: ";
    cin>>coordinate1;
    cout<<endl;
    cout<<"Where would you like to move this piece to: ";
    cin>>coordinate2;
}

