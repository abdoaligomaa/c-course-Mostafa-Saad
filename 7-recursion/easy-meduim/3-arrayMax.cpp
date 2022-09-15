// print the max number of array using recursion

#include <iostream>
// #include<algorithm>
using namespace std;
// make globale variable
int maxArray(int arr[],int len){
    if(len==0){
        return arr[0];
    }
    int subMax=maxArray(arr,len-1);
    return max(subMax,arr[len-1]);
    
}



int main()
{
    int arr[]={1,2,15,3,};
    cout<<maxArray(arr,5);

    return 0;
}