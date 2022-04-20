// read one integers
// then read five integers
// print how many numbers in less than or equal x and
// print how many numbers in greater than x 

#include <iostream>
using namespace std;
int main()
{
    int x, num1, num2, num3, num4, num5, coutn_max, count_min;
    cout << "Enter the integer :";
    cin >> x;
    cout << "Enter the five integers :";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if (num1 < x)
    {
        count_min++;
    }
    if (num2 < x)
    {
        count_min++;
    }
    if (num3 < x)
    {
        count_min++;
    }
    if (num4 < x)
    {
        count_min++;
    }
    if (num5 < x)
    {
        count_min++;
    }
    coutn_max = 5 - count_min;

    cout << count_min << " " << coutn_max;

    return 0;
}

// end of the programm