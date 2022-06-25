// read array items
// check if the array is palandrom or not

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
        cin>>arr[i];
    }
   
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]==arr[n-i-1])
        {
            continue;
        }else{
            cout<<"not palandrom";
            return 0;
        }
       
    }
    cout <<"palandrom";

    return 0;
}

// end of the programm

/*
 the output

    end.....
*/