

#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Please Enter The demintion for The Two D Array : ";
    cin >> rows >> columns;

    int arr[rows][columns];
    int transposeArr[columns][rows];
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
    // make the transopose by convert the array from 3*4 to 4*3
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transposeArr[j][i]=arr[i][j];
        }
    }

    // print the new array
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<transposeArr[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}