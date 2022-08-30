// This is the first game program for me 
// tic tak tok game

#include <iostream>
using namespace std;
int main(){
    // for choice the dimensions geme you want to play with 
    int ArrayDimensions;
    cout << "please Enter the dimensions of the game you wnat to play :";
    cin>>ArrayDimensions;
    string array[ArrayDimensions][ArrayDimensions];
    // set value to 2d array
    for (size_t i = 0; i < ArrayDimensions; i++)
    {
        for (size_t j = 0; j < ArrayDimensions; j++)
        {
            array[i][j]=".";
        }
        
    }
    // int counter to count the game steps and i will use to veriefy which user is play
    int counter = 0;
    bool isWin=false;
    int d1,d2;
    // start the game
    while ((ArrayDimensions * ArrayDimensions) > counter&&!isWin)
    {
        // Enter the direciton
        cout<<"Enter the direction of the choise : ";
        cin>>d1>>d2;

        // check if the dir which i choise is valid to choise or not
        bool isValidDir = (d1 < ArrayDimensions && d2 < ArrayDimensions && d1 >= 0 && d1 >= 0 );

        bool isChoised=!(array[d1][d2]==".");

        if (!(isValidDir && isChoised))
        {
            continue;
        }
        counter++;
        cout << "the counter is " << counter << "is valid " << isValidDir << "is choised" << isChoised;
    }

    // print the array value
    for (size_t i = 0; i < ArrayDimensions; i++)
    {
        for (size_t j = 0; j < ArrayDimensions; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    

    return 0;
}