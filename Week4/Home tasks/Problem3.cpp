#include <iostream>
using namespace std;
main()
{
    int temp1, temp2;
    cout << "Temperature City 1: ";
    cin >> temp1;
    cout << "Temperature City 2: ";
    cin >> temp2;
    if (temp1 - temp2 > 10)
    {
        cout << "Difference is too Big "<<endl;
    }
    cout << "Programs Ends ";
}