
// get the max number of 6 numbers

#include <iostream>
using namespace std;
int max2(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int max3(int a, int b, int c)
{
    int max = max2(a, b);
    return max2(max, c);
}
int max4(int a, int b, int c, int d)
{
    int max = max3(a, b, c);
    return max2(max, d);
}
int max5(int a, int b, int c, int d, int e)
{
    int max = max4(a, b, c, d);
    return max2(max, e);
}
int max6(int a, int b, int c, int d, int e, int f)
{
    int max = max5(a, b, c, d, e);
    return max2(max, f);
}
int main()
{
    int arr[6];
    cout << "Please Enter sex numbers to find the max of it" << endl;
    for (size_t i = 0; i < 6; i++)
    {
        cout << "number " << i + 1 << " :";
        cin >> arr[i];
    }
    cout << "The max number of those numbers is : " << max6(arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
    return 0;
}