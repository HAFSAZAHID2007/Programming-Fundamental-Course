#include <iostream>
using namespace std;
main()
{
    int num, r, sum;

    cout << "Enter a number: ";
    cin >> num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    cout << "Sum of digits: " << sum;
}