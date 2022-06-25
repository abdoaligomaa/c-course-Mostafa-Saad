// read array items 
// get min and max number and swap the min by the max and the max by the min

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of array lengeth : ";
    cin >> n;
    int arr[n];
    // Enter the array items
    int min,max;
    for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i==0){
                min = arr [0];
                max = arr [0];
            }else{
            if (arr[i] >= max)
                max = arr[i];
            if(arr[i]<=min)
                min = arr[i];
            }
        }
        // cout<<max;
        // cout<<min;
    //swapping the max and min
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            // cout<<arr[i]<<" "<<min; 
            arr[i] == max;
        }
        else if (arr[i] == max)
        {
            // cout << arr[i] << " " << max;

            arr[i] == min;
        }
    }

    // print the array after swapping
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

// end of the programm

/*
 the output

    end.....
*/