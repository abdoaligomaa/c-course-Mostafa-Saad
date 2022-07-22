// read one integer = index of array
// print it's value in the recaman sequence

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of index which you want to get its value in recaman sequence : ";
    cin >> n;
    int arr[n];
    arr[0] = 0;
    int value;
    for (int i = 1; i <= n; i++)
    {
        value = arr[i - 1] - i - 1;
        bool Appeared = false;
        // check if the value appeared in the prevous numbers or not
        for (int j = i - 1; j >= 0; j--)
        {
            if (value == arr[j])
            {
                Appeared = true;
                break;
            }
            
        }
        if (!Appeared && value > 0)
        {
            arr[i] = value;
        }
        else
        {
            arr[i] = arr[i - 1] + i + 1;
        }
    }
    cout<<"the value of the index is "<<arr[n-1];

    return 0;
}

// end of the programm

/*
 the output

    end.....
*/