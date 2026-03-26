#include <iostream>
using namespace std;
main()
{
    int n;
    float sum = 0;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;
    float resistance[n];
    cout << "Enter the resistance values (in ohms) of the " << n << " resistors,one per line:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> resistance[i];
        sum = sum + resistance[i];
    }
    cout << "The total resistance of 3 series circuit is " << sum << " ohms.";
}