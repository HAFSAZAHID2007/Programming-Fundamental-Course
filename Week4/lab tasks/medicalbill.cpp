#include <iostream>
using namespace std;
main()
{
    int bill;
    float discount;
    cout << "Enter your bill: ";
    cin >> bill;
    if (bill <= 5000)
    {
        discount = (bill * 5)/100;
        bill = bill - discount;
        cout << "Your discounted bill is:  " << bill;
    }
    if (bill > 5000)
    {
        discount = (bill * 10)/100;
        bill = bill - discount;
        cout << "Your dicounted bill is:  " << bill;
    }
}