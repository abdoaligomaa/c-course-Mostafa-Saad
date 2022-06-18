// read one integer
// then print the numbers which n%8=0 or (n%3=0||n%4=0)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the Number ";
    cin>>n;
    int i=1;
    while(i<=n){
        bool condtionOne=i % 3 == 0 &&i % 4 == 0;
        bool condtionTwo = i % 8 == 0;
        if (condtionOne||condtionTwo){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}

// end of the programm

/*

*/