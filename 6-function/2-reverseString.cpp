
// get the max number of 6 numbers

#include <iostream>
using namespace std;
string reverseString( string str){
    int temp;
    for (size_t i = 0; i < str.length()/2; i++)
    {
        temp=str[i];
        str[i]=str[str.length()-i-1];
        str[str.length() - i - 1]=temp;
    }
    return str;
    
}
int main()
{
    string str;
    cout<<"Enter the String you want to reverse it :";
    cin>>str;
    cout<<"The reverse String is : "<<reverseString(str);
    
    return 0;
}