
//  read fout integers s,e for starting and ending the interval
// print the inter section points of the two interval

#include <iostream>
using namespace std;
int main()
{
    int s1, e1, s2, e2;

    cout << "enter the integer x : ";
    cout << "enter the two interval start and end" << endl;
    cin >> s1 >> e1 >> s2 >> e2;
    if (s1 > e2 || e1 < s2)
    {
        cout << -1;
    }
    else
    {
        if (s2 > s1)
            s1 = s2;
        if (e2 < e1)
            e1 = e2;
    cout << "the result is " << s1 << " " << e1;
    }

    return 0;
}

// end of the programm