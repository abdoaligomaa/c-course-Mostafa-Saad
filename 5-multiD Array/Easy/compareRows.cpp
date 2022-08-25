

#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Please Enter The demintion for The Two D Array : ";
    cin >> rows >> columns;

    int arr[rows][columns];
    // read array items
    cout << "Please Enter The array items" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Item " << i << " " << j << " is : ";
            cin >> arr[i][j];
        }
    }
    int query;
    int row1, row2;
    cout << "Enter the number of Querey you want to check: ";
    cin >> query;
    while (query)
    {
        cout << "Enter The row and culume which you want to compaire: ";
        cin >> row1 >> row2;
        // make the compaire by using one for loop
        bool AllISLower=true;
        for (int j = 0; j < columns; j++)
        {
            if (!(arr[row1][j] < arr[row2][j]))
            {
                cout << "NO" << endl;
                AllISLower=false;
                break;
            }
        }
        if(AllISLower){
            cout<<"YES"<<endl;
        }

        query--;
    }

    return 0;
}