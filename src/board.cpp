#include <iostream>
#include <map>
#include <string>

#include "board.hpp"

using namespace std;


    map <string,string> arr = {{}};

void Board::createBoard()
{
 
    
    for(int i=0;i<8;i++)
    {
        cout<<endl;
        for(int j=0;j<8;j++)
        {
            string key = to_string(i)+ "," + to_string(j);
            arr[key]="[ ]";
            cout<<arr[key];
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
 arr["A1"]="[R]";
 arr["H1"]="[R]";
 arr["B1"]="[N]";
 arr["C1"]="[B]";
 arr["F1"]="[B]";
 arr["G1"]="[N]";
 arr["D1"]="[Q]";
 arr["E1"]="[K]";
 for(int i=0;i<8;i++)
 {
     arr[]="[P]";
 }
 arr["H8"]="[r]";
 arr["A8"]="[r]";
 arr["G8"]="[n]";
 arr["F8"]="[b]";
 arr["C8"]="[b]";
 arr["B8"]="[n]";
 arr["E8"]="[k]";
 arr["D8"]="[q]";
 for(int i=0;i<8;i++)
 {
     arr[]="[p]";
 }

break;

case 2://Dla czarnych 
cout<<"You re playing black!";
arr[0][0]="[R]";
arr[0][7]="[R]";
arr[0][1]="[N]";
arr[0][2]="[B]";
arr[0][5]="[B]";
arr[0][6]="[N]";
arr[0][3]="[Q]";
arr[0][4]="[K]";
for(int i=0;i<8;i++)
{
    arr[1][i]="[P]";
}
arr[7][0]="[r]";
arr[7][7]="[r]";
arr[7][1]="[n]";
arr[7][2]="[b]";
arr[7][5]="[b]";
arr[7][6]="[n]";
arr[7][3]="[k]";
arr[7][4]="[q]";
for(int i=0;i<8;i++)
{
    arr[6][i]="[p]";
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
    cout<<(int)coordinate1[0]-65<<" "<<coordinate1[1]-'0'<<endl<<(int)coordinate2[0]-65<<" "<<coordinate2[1]-'0'<<endl;
    arr[coordinate2[1]-1-'0'][(int)coordinate2[0]-65]= arr[coordinate1[1]-1-'0'][(int)coordinate1[0]-65];
    arr[coordinate1[1]-1-'0'][(int)coordinate1[0]-65]="[ ]";
    // arr[0][2]=arr[0][1];
    // arr[0][1]="[ ]";
    

    for(int i=0;i<8;i++)
    {
       for(int j=0;j<8;j++)
       {
           cout<<arr[i][j];
       }
       cout<<endl;
    }

}

