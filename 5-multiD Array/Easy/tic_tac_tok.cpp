// This is the first game program for me 
// tic tak tok game

#include <iostream>
using namespace std;
int main(){
    // for choice the dimensions geme you want to play with 
    int ArrayDimensions;
    cout << "please Enter the dimensions of the game you wnat to play :";
    cin>>ArrayDimensions;
    char array[ArrayDimensions][ArrayDimensions];
    // int counter to count the game steps and i will use to veriefy which user is play
    int counter = 0;
    bool isWin=false;
    // start the game
    while ((ArrayDimensions * ArrayDimensions) > counter&&!isWin)
    {
        cout<<"hi";
        isWin=true;
    }
    

    return 0;
}