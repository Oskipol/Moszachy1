#include <iostream>
#include <map>
#include <string>
#include "board.hpp"

using namespace std;

map <string,string> arr = {{"A1", "[R]"},{"B1", "[N]"},{"C1", "[B]"},{"D1", "[K]"},{"E1", "[Q]"},{"F1","[B]"},{"G1", "[N]"},{"H1", "[R]"},
{"A8", "[r]"},{"B8", "[n]"},{"C8", "[b]"},{"D8", "[q]"},{"E8", "[k]"},{"F8","[b]"},{"G8", "[n]"},{"H8", "[r]"}};

bool Board::chooseColor()
{
 cout<<"Which pieces would you like to play?"<<endl;
 cout<<"0.White"<<endl;
 cout<<"1.Black"<<endl;
 cin>>choice;
if(choice == '0') cout<<"You re playing white!";
if(choice == '1') cout<<"You re playing black!";
else cout<<"You re retarded!";
return choice;
}


void Board::createBoard()
{
 
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
    arr.insert({k, "[P]"});
 }

 for(int i=65;i<73;i++)
 {
    string k={char(i), '7'};
    arr.insert({k, "[p]"});
 }
 
 switch (choice ){
 case 0://Dla bialych
 cout<<"You re playing White!"<<endl;

for(int i=8;i>0;i--)
{
  cout<<endl;
   for(int j=73;j>65;j--)
   {
      string k={char(j), static_cast<char>(i+'0')};
      cout<<arr[k];
      //cout<<k;
   }
}
cout<<endl;
break;

case 1://Dla czarnych 
cout<<"You re playing black!"<<endl;

for(int i=1;i<9;i++)
{
  cout<<endl;
   for(int j=65;j<73;j++)
   {
      string k={char(j), static_cast<char>(i+'0')};
      cout<<arr[k];
      //cout<<k;
   }
}
cout<<endl;


break;
//DOKLEIC WERSJE DLA RANDOM 
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







}

