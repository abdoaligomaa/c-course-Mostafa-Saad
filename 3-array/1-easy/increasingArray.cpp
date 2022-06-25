// read one integer
// then print two trangles one under the other one.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of array lengeth : ";
    cin>>n;
    int arr[n];
    // Enter the array items
    for(int i=0;i<n;i++)cin>>arr[i];

    for (int i = 0; i < n-1; i++){
        if(arr[i]>arr[i+1]){
            cout<<"NO, The array is not Encreasing array";
            return 0;
        }
    }
    cout << "Yes, the Array is an Encreasing array";

    return 0;
}

// end of the programm

/*
 the output
  
    end.....
*/