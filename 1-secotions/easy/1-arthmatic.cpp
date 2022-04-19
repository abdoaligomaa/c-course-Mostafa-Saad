// read two integers x and y
// is both is odd pring x*y
// is both is even pring x/y
// if x is even and y is odd pring x+y
// if x is odd and y is even pring x-y

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout <<"Enter the two integers :";
    cin>>x>>y;

    bool is_x_even ;
    bool is_y_even ;
    if(x%2==0){
        is_x_even=true;
    }else{
        is_x_even = false;
    }
    if (y % 2 == 0)
    {
        is_y_even = true;
    }
    else
    {
        is_y_even = false;
    }

    if(! is_x_even&&! is_y_even){
        cout<<"the result is :"<<x*y;
    }
    else if ( is_x_even && is_y_even)
    {
        cout << "the result is :" << x / y;
    }
    else if (!is_x_even && is_y_even)
    {
        cout << "the result is :" << x + y;
    }else{
        cout << "the result is :" << x - y;
    }

    return 0;
}

// end of the programm 