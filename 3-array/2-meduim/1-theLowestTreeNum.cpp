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
    int first = 1000000, second = 1000000, third = 1000000;
    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        if (first > current)
        {
            third = second;
            second = first;
            first = current;
        }
        else if (second > current)
        {
            third = second;
            second = current;
        }
        else if (third > current)
        {
            third = current;
        }
    }
    cout << "first lowest :"<< first << " second lowest :" << second << " third lowest :" << third;

        return 0;
}

// end of the programm

/*
 the output

    end.....
*/