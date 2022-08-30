// This is the first game program for me
// tic tak tok game

#include <iostream>
using namespace std;
int main()
{
    // for choice the dimensions geme you want to play with
    int ArrayDimensions;
    cout << "please Enter the dimensions of the game you wnat to play :";
    cin >> ArrayDimensions;
    string array[ArrayDimensions][ArrayDimensions];
    // set value to 2d array
    for (size_t i = 0; i < ArrayDimensions; i++)
    {
        for (size_t j = 0; j < ArrayDimensions; j++)
        {
            array[i][j] = ".";
        }
    }
    // int counter to count the game steps and i will use to veriefy which user is play
    int counter = 0;
    bool isWin = false;
    int d1, d2;
    // start the game
    while ((ArrayDimensions * ArrayDimensions) > counter && !isWin)
    {
        // Enter the direciton
        cout << "Enter the direction of the choise : ";
        cin >> d1 >> d2;

        // check if the dir which i choise is valid to choise or not
        bool isValidDir = (d1 < ArrayDimensions && d2 < ArrayDimensions && d2 >= 0 && d1 >= 0);

        bool isNotChoised = (array[d1][d2] == ".");
        // cout << isValidDir << " " << isNotChoised;

        if (!(isValidDir && isNotChoised))
        {
            cout << "Please Enter a valid direction" << endl;
            continue;
        }
        // put the symbole into array
        string symbole;
        if(counter%2==0){
            symbole="X";

        }else{
            symbole="O";
        }
        array[d1][d2] = symbole;
        counter++;

        // print the array value
        for (size_t i = 0; i < ArrayDimensions; i++)
        {
            for (size_t j = 0; j < ArrayDimensions; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
    }

    // // print the array value
    // for (size_t i = 0; i < ArrayDimensions; i++)
    // {
    //     for (size_t j = 0; j < ArrayDimensions; j++)
    //     {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}