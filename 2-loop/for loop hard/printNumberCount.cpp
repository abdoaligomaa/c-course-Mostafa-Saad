
//count how many x y the x[50,30] and y [70 400]
// and x<y 
// x+y is divisible by 7

#include <iostream>
using namespace std;
int main()
{
   int count=0;
    for(int y=70;y<=400;y++){
        for (int x= 50; x <= 300&&x<y; x++)
        {
            if((x+y)%7==0){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

// end of the programm

/*
 the output
    8040 

    end.....
*/