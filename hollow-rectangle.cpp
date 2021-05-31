#include <bits/stdc++.h>
using namespace std;

int main()
{
    //
    /*Code here Saksham*/
    //
    int rows, columns;
    cin >> rows >> columns;
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j < columns; j++)
        {
            /* code */
            if (i == 0 || i == columns-1 || j == 0 || j == rows-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

