// print the sum of all number of array using recursion

#include <iostream>
// #include<algorithm>
using namespace std;
// make globale variable
int sum=0;
int sumOfArray(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0];
    }
    sum = sumOfArray(arr, len - 1) + arr[len - 1];
    return sum;
    
}

int main()
{
    int arr[] = {
        1,
        2,
        15,
        3,
        2
    };
    cout << sumOfArray(arr, 5);

    return 0;
}