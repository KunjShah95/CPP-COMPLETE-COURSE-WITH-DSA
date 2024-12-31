#include<iostream>
using namespace std;
int main()
{
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;
    int midRow = numRows / 2 + 1;
    for (int row = 1; row <= numRows; row++)
    {
        for (int col = 1; col <= numRows; col++)
        {
            if (row == midRow || col == midRow)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
