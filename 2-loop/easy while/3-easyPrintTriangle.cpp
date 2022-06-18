// read one  number
// print the reverse left triangle of this number

#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the integer :";
    cin >> row;
    while(row>0){
        int col=1;
        while (col<=row)
        {
            cout<<"*";
            col++;
        }cout<<endl;
        row--;
        
    }

    return 0;
}

// end of the programm