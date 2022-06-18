// read two integers x and y
// print the numbers between x and y

#include <iostream>
using namespace std;
int main()
{
    int x;
    char y;

    cout << "Enter the an integer x and char y :";
    cin >> x >> y;

    while (x > 0)
    {
        cout << y  ;
        x--;
    }

    return 0;
}

// end of the programm