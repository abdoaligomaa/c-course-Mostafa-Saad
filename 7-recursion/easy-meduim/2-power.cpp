// power function using recursion

#include <iostream>
using namespace std;
// make globale variable
int calcPower(int value,int p = 2)
{
    if (p == 0)
        return 1;
    return calcPower(value, p - 1)*value;
}

int main()
{
    int result1 = calcPower(2);
    int result2 = calcPower(9, 2);
    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}