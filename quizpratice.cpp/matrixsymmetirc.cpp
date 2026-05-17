#include <iostream>
using namespace std;
main()
{ int r=2;
    int c=2;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    if(r!=c){
        cout<<"Matrix is not symmetric ";
        return 0;
    }

    bool symmetric = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }
    if (symmetric)
    {
        cout << "Matrix is symmetric";
    }
    else
        cout << "Matrix is not symmetric ";
}