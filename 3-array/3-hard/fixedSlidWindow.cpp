// get the sum of the max sub array 
// and print the first and the end index and its sum value.

#include <iostream>
using namespace std;
int main()
{
    int k,n;
    int sum,maxSum,firstIndex,lastIndex;
    cout << "Enter number of index which you want to get its value in recaman sequence : ";
    cin>>k;
    cin >> n;
    int arr[n];
    cout << "Enter the Arrray value ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]
    }
    for (int i = 0; i < n-k; i++)
    {
        for (int j = i; j < i+k; j++)
        {
            sum+=arr[j]
        }
    }

    return 0;
}

// end of the programm

/*
 the output

    end.....
*/