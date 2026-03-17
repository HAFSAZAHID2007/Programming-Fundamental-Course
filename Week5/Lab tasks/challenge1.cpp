#include <iostream>
using namespace std;
main()
{
    int num = 24;
    cout << "Multiplication Table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "*" << i << "=" << num * i << endl;
    }
    cout << "\n";


    int num2 = 50;
    cout << "Multiplication Table of " << num2 << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num2 << "*" << i << "=" << num2 * i << endl;
    }
    cout << "\n";

    
    int num3 = 29;
    cout << "Multiplication Table of " << num3 << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num3 << "*" << i << "=" << num3 * i << endl;
    }
}