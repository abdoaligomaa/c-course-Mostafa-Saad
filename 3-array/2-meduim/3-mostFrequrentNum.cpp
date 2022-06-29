// read array items
// find most frequent number 
// the numbers would be from -500 to 270

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of numbers you will Enter  : ";
    cin >> n;
    int value;
    int arr[770]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        arr[value+500]++;
    }
    // find the max index and value of array
    int maxIndex=0;
    for (int i = 0; i < 770; i++)
    {
        if(arr[maxIndex]<=arr[i]){
            maxIndex=i;
        }
    }
    cout << "the max repeated number is repeated  " << arr[maxIndex]<<" times and the number is  : "<<maxIndex-500;

        return 0;
}

// end of the programm

/*
 the output

    end.....
*/