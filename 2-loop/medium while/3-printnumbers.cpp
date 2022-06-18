// read one integer
// then print the numbers which n%3=0 and not(n%=4)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the Number ";
    cin >> n;
    int count = 0;
    int i=1;
    while (count < n&& i<1000)
    {
        bool condtionOne = i % 3 == 0 ;
        bool condtionTwo = i % 4 == 0;
        if (condtionOne && !condtionTwo)
        {
            cout << i << " ";
            count++;
        }
        i++;
        
    }
    return 0;
}

// end of the programm

/*

*/