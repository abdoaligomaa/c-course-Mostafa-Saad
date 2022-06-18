// read integer n follow by n numbers 
// print the average in odd and even posithion

#include <iostream>
using namespace std;
int main()
{

    int n,x,countEven=0,countOdd=0;
    cin>>n;
    while (n>0)
    {
        cin>>x;
        if(n%2==0){
            countEven+=x;
        }else{
            countOdd += x;
        }
        n--;
        
    }
    cout<<"even "<<countEven<<"  "<<"odd "<<countOdd;
    

    return 0;
}

// end of the programm