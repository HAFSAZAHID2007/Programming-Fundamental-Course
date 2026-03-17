#include <iostream>
using namespace std;
main()
{
    int i, j, k;
    for (i = 2; i <= 5; i++)
    {
          for (j = 1; j <= i; j++)
        {
            cout << "*";
            
        }
        cout << "\n";
    }
     for (i = 1; i <= 5; i++){
        for (k = 1; k <= 6 - i; k++)
        {
           cout << "*";
        }
        cout << "\n";
    }
}