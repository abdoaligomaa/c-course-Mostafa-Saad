// read two string and print YES if the two strings is Prefex and NO if not

#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "please Enter the string" << endl;
    cin >> str ;
    cout<<str[0];
    for (int i = 1; i < str.length(); i++)
    {
        if(str[i]==str[i-1]){
            cout << str[i];
        }else{
            cout <<" "<< str[i];
        }
    }
    return 0;
}