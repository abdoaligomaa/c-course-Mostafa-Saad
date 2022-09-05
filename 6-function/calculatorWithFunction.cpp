// make simple calculator to do some operations
// sum and subtraction and multiplied and division

#include <iostream>
using namespace std;
int sumution(int a, int b)
{
    return a + b;
}
int subtration(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    // if (b == 0)
    // {
    //     return 0; // this mean the division is not true
    // }
    return a / b;
}

void display()
{
    int choice = -1, result;
    int a, b;

    cout << "1) to do Sum" << endl;
    cout << "2) to do subtraction" << endl;
    cout << "3) to do multiplication" << endl;
    cout << "4) to do division" << endl;
    cout << "5) to Exit" << endl;
    cin >> choice;

    while (choice != -1)
    {

        if (choice == 1)
        {
            cout << "Enter numbers to sum" << endl;
            cin >> a >> b;
            result = sumution(a, b);
            cout << "The reuslt is : " << result;
        }
        if (choice == 2)
        {
            cout << "Enter numbers to sub" << endl;
            cin >> a >> b;
            result = subtration(a, b);
            cout << "The reuslt is : " << result;
        }
        if (choice == 3)
        {
            cout << "Enter numbers to multi" << endl;
            cin >> a >> b;
            result = multiplication(a, b);
            cout << "The reuslt is : " << result;
        }
        if (choice == 4)
        {
            cout << "Enter numbers to divide" << endl;
            cin >> a >> b;
            result = division(a, b);
            cout << "The reuslt is : " << result;
        }
        if (choice == 5)
        {
            cout<<"The program Exit!!!!!!!!!!!!!"<<endl;
            break;
        }
    }
}

int main()
{
    display();
    return 0;
}
