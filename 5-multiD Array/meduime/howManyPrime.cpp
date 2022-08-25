

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

            // you should check if the number is prime or not here
            // isPrimeArray[100][100]={0}
            // if(the number is prime ){
            // isPrimeArray[i][j]=1; 
            // }
        }
    }
    int query;
    cout << " Please Enter the number of querey you want to check : ";
    cin >> query;
    int row, colum, mi, mj;
    // mi and mj is the subMatrix dimintions
    // row and colum is the position for the index which you want to start from

    while (query--)
    {
        int sum = 0;
        cout << "please Enter the query fields " << endl;
        cin >> row >> colum >> mi >> mj;
        // init the dimintions for subarray
        int firstRow = row;
        int lastRow = row+mi;
        int firstColum = colum;
        int lastColum = colum+mj;

        for (int i = firstRow; i < lastRow; i++)
        {
            for (int j = firstColum; j <lastColum; j++)
            {
                // check for prime or not
                // get is prime or not from is prime array and
                // sum++

            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
        }
    }

    return 0;
}