#include <iostream>
using namespace std;
int main()
{

    int rows;
    cin >> rows;
    int *number = new int[rows];
    int **arr = new int *[rows]; // jagged array
    for (int i = 0; i < rows; i++)
    {
        cout << "enter no. of col n row" << i << " : " << endl;
        cin >> number[i];
        arr[i] = new int[number[i]];
    }
    // taking inputs
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}