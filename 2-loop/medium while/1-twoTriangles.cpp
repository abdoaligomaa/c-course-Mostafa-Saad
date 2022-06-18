// read one integer
// then print two trangles one under the other one.

#include <iostream>
using namespace std;
int main()
{
    int rows=5;
    cout<<"please Enter the number of Rows in one Triangle : ";
    cin>>rows;
    // spaces =rows-rowNumber
    // all spaces and stars =rows +(rowNumber-1)
    // stars =all =spaces

    // to print the upper triangle
    for(int row=1;row<=rows;row++){
        int spaces=rows-row;
        int all=rows+(row-1);
        int stars=all-spaces;

        // to print the spaces 
        for(int space=1;space<=spaces;space++){
            cout<<" ";
        }
        // to print the starts
        for (int star = 1; star <= stars; star++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    // to print the downest triangle
    for (int row = rows; row >= 1; row--)
    {
        int spaces = rows - row;
        int all = rows + (row - 1);
        int stars = all - spaces;

        // to print the spaces
        for (int space = 1; space <= spaces; space++)
        {
            cout << " ";
        }
        // to print the starts
        for (int star = 1; star <= stars; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// end of the programm

/*
 the output
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/