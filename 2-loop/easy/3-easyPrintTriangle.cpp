// read one  number
// print the reverse left triangle of this number

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the integer :";
    cin >> x;
    while(x>0){
        int n=1;
        while (n<=x)
        {
            cout<<"*";
            n++;
        }cout<<endl;
        x--;
        
    }

    return 0;
}

// end of the programm