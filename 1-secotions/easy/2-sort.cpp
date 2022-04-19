// read three integers and sort them 

#include <iostream>
using namespace std;
int main()
{
    int x, y, z, temp;
    cout << "Enter the three integers :";
    cin >> x >> y >> z;
    if (y < x)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if (z < y)
    {
        temp = y;
        y = z;
        z = temp;

        if (y < x)
        {
            temp = x;
            x = y;
            y = temp;
        }
    }
    cout << x << " " <<  y << " " <<z;
    return 0;
}

// end of the programm