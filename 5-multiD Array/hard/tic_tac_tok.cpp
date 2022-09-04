// This is the first game program for me
// tic tak tok game

#include <iostream>
using namespace std;
int main()
{
    // for choice the dimensions geme you want to play with
    int ArrayDimensions;
    cout << "please Enter the dimensions of the game you wnat to play (from 3 to 9) :";
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
        // init the symble X or O
        string symbole;
        if (counter % 2 == 0)
        {
            symbole = "X";
        }
        else
        {
            symbole = "O";
        }
        // Enter the direciton
        // the direction should be in 1 base not 0 base to be more readable game
        cout << "Player : " << symbole << " Please Enter the The Direction :";
        cin >> d1 >> d2;

        // to make the game in 0 base decrease by one
        d1--;
        d2--;

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
        // check for if this user win or not
        int winCount = 0;
        // check if he win by completing all row

        for (size_t i = 0; i < ArrayDimensions; i++)
        {
            if (array[d1][i] == symbole)
            {
                winCount++;
                continue;
            }
            break;
        }
        if (winCount == ArrayDimensions)
        {
            isWin = true;
            cout << "the user : " << symbole << "is win!! GAME OVER" << endl;
            cout << endl;
            cout << "**************************************************";
        }
        // check if he win by completing all colume
        winCount = 0; // you must make wincount =0
        for (size_t i = 0; i < ArrayDimensions; i++)
        {
            if (array[i][d2] == symbole)
            {
                winCount++;
                continue;
            }
            break;
        }
        if (winCount == ArrayDimensions)
        {
            isWin = true;
            cout << "the user : " << symbole << " is win!! GAME OVER" << endl;
            cout << endl;
            cout << "**************************************************";
        }
        // check if he win by completing all right diagonal
        // you should check if he is in the diagonal or not by checking d1==d2
        if (d1 == d2)
        {

            winCount = 0; // you must make wincount =0
            for (size_t i = 0; i < ArrayDimensions; i++)
            {
                if (array[i][i] == symbole)
                {
                    winCount++;
                    continue;
                }
                break;
            }
            if (winCount == ArrayDimensions)
            {
                isWin = true;
                cout << "the user : " << symbole << " is win!! GAME OVER" << endl;
                cout << endl;
                cout << "**************************************************";
            }
        }
        // check if he win by completing all right diagonal
        // you should check if he is in the diagonal or not by checking d1==d2
        if (d1 + d2 == ArrayDimensions - 1)
        {

            winCount = 0; // you must make wincount =0
            for (size_t i = 0, j = ArrayDimensions - 1; i < ArrayDimensions; i++, j--)
            {
                if (array[i][j] == symbole)
                {
                    winCount++;
                    continue;
                }
                break;
            }
            if (winCount == ArrayDimensions)
            {
                isWin = true;
                cout << "the user : " << symbole << " is win!! GAME OVER" << endl;
                cout << endl;
                cout << "**************************************************";
            }
        }
    }

    return 0;
}