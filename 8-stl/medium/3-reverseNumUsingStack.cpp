#include <iostream>
using namespace std;

#include <stack>

int reverse_num(int number)
{
    if (number == 0)
        return 0;
    // init stack to store digits
    stack<int> s;

    // divide the number into digits and put it into stack
    while (number)
    {
        s.push(number % 10);
        number /= 10;
    }

    // get the item from stack and multiply it by 1, 10,100  and so on the sum all
    int tens = 1;
    while (!s.empty())
    {
        number = s.top() * tens + number;
        tens *= 10;
        s.pop();
    }

    return number;
}

int main()
{
    int num;
    cout << "Enter the number to reverse using stack ";
    cin >> num;

    cout << "the reverse is : " << reverse_num(num);
    return 0;
}
