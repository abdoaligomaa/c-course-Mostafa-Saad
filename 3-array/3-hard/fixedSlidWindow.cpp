// get the sum of the max sub array 
// and print the first and the end index and its sum value.

#include <iostream>
using namespace std;
int main()
{
    int sum=0,oldSum=-10000,firstIndex,lastIndex;
    int k,n;
    cout <<"please Enter the length of number of the array and the length of sub array"<<endl;
    cin>>n>>k;
    int arr[n];
    cout<< "Enter the array items"<<endl;

    // Enter the items of the Array
    for (size_t i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    // loop for the array items to splite the sub array 
    for (size_t i = 0; i <n-k+1; i++)
    {
        sum=0;
     for (size_t j= i; j <k+i; j++)
    {
        sum+=arr[j];
    }
    if(sum>=oldSum){
        oldSum=sum;
        firstIndex=i;
        lastIndex=k+i-1; 
    }
    }
    cout<<"the max sum is "<<oldSum<< " and start at index "<<firstIndex<< "and ended at index "<<lastIndex;

    

    return 0;
}

// end of the programm

/*
 the output

    end.....
*/