// read array items
// find the lowest three numbers

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of array lengeth : ";
    cin >> n;
    int arr[n];
    // Enter the array items
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q,test;
    cin >>q;
    for (int i = 0; i < q; i++)
    {
    cout << "Enter the qurery : ";
        cin >> test;

    for (int i = n - 1; i > -1; i++)
    {
        if (test == arr[i])
        {
            cout << "the Q is in index : " << i << "in the array [n]";
            break;
        }
        cout << "the Q does not exist in the array";
        break;
        }
    }
   

    return 0;
}

// end of the programm

/*
 the output

    end.....
*/