// read one integer
// then print the numbers which n%3=0 and not(n%=4)

#include <iostream>
using namespace std;
int main()
{
    int T;
    cout<<"Enter the test cases : ";
    cin>>T;
    while (T>0)
    {
        int number;
        cout << "Enter the number : ";
        cin >> number;
        int min=0,value;
        int count=0; // used to make the first value is the min
        while (number > 0)
        {
            cin>>value;
            if(count==0){
                min=value;
                count++;
            }
            if(value<min){
                min=value;
            }
            number--;

        }
        cout<<min<<endl;
        T--;
    }
    return 0;
    
   
}

// end of the programm

/*

*/