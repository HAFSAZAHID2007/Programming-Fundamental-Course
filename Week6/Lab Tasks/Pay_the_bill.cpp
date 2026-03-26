#include <iostream>
using namespace std;
main()
{
    int coins[4];
    cout << "Enter quarter:";
    cin >> coins[0];
    cout << "Enter dimes:";
    cin >> coins[1];
    cout << "Enter nickels:";
    cin >> coins[2];
    cout << "Enter pennies:";
    cin >> coins[3];
    float due;
    cout << "Enter the total amount due:$";
    cin >> due;
    float total;
    total= coins[0] * 0.25 + coins[1] * 0.10 + coins[2] * 0.05 + coins[3] * 0.01;
    if (total >= due)
    {
        cout << "Can you pay the amount? Yes";
    }
    else
    {
        cout << "Can you pay the amount? No";
    }
}