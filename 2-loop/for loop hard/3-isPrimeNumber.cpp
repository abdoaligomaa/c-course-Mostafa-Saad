// read number 
// check if it is prime print yes otherwise print no

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"print the tested number which test if prime or not \n";
    cin>>number;
    for(int i=2;i<number;i++){
        if(number%i==0){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}

// end of the programm

/*
 the output
    8040

    end.....
*/