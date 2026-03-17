#include<iostream>
using namespace std;
main()
{
    int num, digit;
    int last, counter;
    cout << "Enter a number:";
    cin >> num;
    cout << "Enter the digit to check :";
    cin >> digit;
    for ( int i = num ;i > 0; i = i/=10)
    {
        last = i % 10;
        if (digit == last)
        {
            counter++;
        }
    }
cout << "Frequency: "<<counter;
}