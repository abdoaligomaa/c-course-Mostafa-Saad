// read one integers
// then read six integers s,e for starting and ending the interval 
// print how many interval which x cut it

#include <iostream>
using namespace std;
int main()
{
    int x, s1, e1, s2, e2, s3,e3;
    int count=0;
    cout<<"enter the integer x : ";
    cin>>x;
    cout << "enter the three interval start and end"<<endl;
    cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

        count += (x >= s1 && x <= e1);
        count += (x >= s2 && x <= e2);
        count += (x >= s3 && x <= e3);
        cout <<"the result is "<<count;
        return 0;
}

// end of the programm