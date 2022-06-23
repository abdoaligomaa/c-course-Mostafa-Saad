// read one integer
// then print x by stars 

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "please Enter the number of Rows in X  : ";
    cin >> rows;
    // to print the first * col=row
    // to print the second * => col=rows-row+1
    
    for(int row=1;row<=rows;row++){
        for(int col=1;col<=rows;col++){
            if(col==row||col==rows-row+1){
                cout<<"*";
            }
            else  
            {
                cout << " ";
            }
            
        }
            cout<<endl;
    }
    
    return 0;
}

// end of the programm

/*
 the output
*   *
 * *
  *
 * *
*   *

    end.....
*/