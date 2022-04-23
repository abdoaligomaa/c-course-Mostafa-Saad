// read one  number
// print the  left triangle of this number

#include <iostream>
using namespace std;
int main()
{
    int row,count=1;
    cout << "Enter the integer :";
    cin >> row;
    while (count <=row)
    {
        int n = 1;
        while (n <= count)
        {
            cout << "*";
            n++;
        }
        cout << endl;
        count++;
    }

    return 0;
}

// end of the programm