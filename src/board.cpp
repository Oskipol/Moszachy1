#include <iostream>
#include "board.hpp"

using namespace std;

   string arr[8][8];

void Board::createBoard()
{
 
    
    for(int i=0;i<8;i++)
    {
        cout<<endl;
        for(int j=0;j<8;j++)
        {
            arr[i][j]="[ ]";
        }
    }

 int choice;
 cout<<"Which pieces would you like to play?"<<endl;
 cout<<"1.White"<<endl;
 cout<<"2.Black"<<endl;
 cout<<"3.Random"<<endl;
 cout<<"Your choice:"; cin>>choice;
 

 switch (choice)
 {
 case 1://Dla bialych
 cout<<"You re playing White!";
 arr[7][0]="[♜]";
 arr[7][7]="[♜]";
 arr[7][1]="[♞]";
 arr[7][2]="[♝]";
 arr[7][5]="[♝]";
 arr[7][6]="[♞]";
 arr[7][3]="[♛]";
 arr[7][4]="[♚]";
 for(int i=0;i<8;i++)
 {
     arr[6][i]="[♟]";
 }
 arr[0][0]="[♖]";
 arr[0][7]="[♖]";
 arr[0][1]="[♘]";
 arr[0][2]="[♗]";
 arr[0][5]="[♗]";
 arr[0][6]="[♘]";
 arr[0][3]="[♔]";
 arr[0][4]="[♕]";
 for(int i=0;i<8;i++)
 {
     arr[1][i]="[♟]";
 }

break;

case 2://Dla czarnych 
cout<<"You re playing black!";
arr[0][0]="[♜]";
arr[0][7]="[♜]";
arr[0][1]="[♞]";
arr[0][2]="[♝]";
arr[0][5]="[♝]";
arr[0][6]="[♞]";
arr[0][3]="[♛]";
arr[0][4]="[♚]";
for(int i=0;i<8;i++)
{
    arr[1][i]="[♟]";
}
arr[7][0]="[♖]";
arr[7][7]="[♖]";
arr[7][1]="[♘]";
arr[7][2]="[♗]";
arr[7][5]="[♗]";
arr[7][6]="[♘]";
arr[7][3]="[♔]";
arr[7][4]="[♕]";
for(int i=0;i<8;i++)
{
    arr[6][i]="[♟]";
}
break;
//DOKLEIC WERSJE DLA RANDOM 
 }
 cout<<endl;
 for(int i=0;i<8;i++)
 {
    for(int j=0;j<8;j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
 }
}


void Board::movingPieces()
{
    
    cout<<"Which piece would you like to move from: ";
    cin>>coordinate1;
    cout<<endl;
    cout<<"Where would you like to move this piece to: ";
    cin>>coordinate2;
 
    arr[(int)coordinate2[0]-65][coordinate2[1]-'0']= arr[(int)coordinate1[0]-65][coordinate1[1]-'0'];

    arr[(int)coordinate1[0]-65][coordinate1[1]-'0']="[ ]";
    

    for(int i=0;i<8;i++)
    {
       for(int j=0;j<8;j++)
       {
           cout<<arr[i][j];
       }
       cout<<endl;
    }

}

