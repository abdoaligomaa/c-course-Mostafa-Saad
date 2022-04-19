// read three numbers
// find the maximum of them which is <100

#include <iostream>
using namespace std;
int main()
{
    int x, y, z, temp;
    cout << "Enter the three integers :";
    cin >> x >> y >> z;
    int res = -1;
    if (x < 100 && x > res)
    {
        res = x;
    }
    if (y < 100 && y > res)
    {
        res = y;
    }
    if (z < 100 && z > res)
    {
        res = z;
    }
    cout <<res;

    return 0;
}

// end of the programm