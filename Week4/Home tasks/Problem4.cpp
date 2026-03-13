#include <iostream>
using namespace std;
main()
{
    int redRose, whiteRose, tulips;
    float totalprice, discount;
    cout << "Red Rose: ";
    cin >> redRose;
    cout << "White Rose: ";
    cin >> whiteRose;
    cout << "Tulips: ";
    cin >> tulips;
    totalprice = (redRose * 2.00) + (whiteRose * 4.10) + (tulips * 2.50);
    cout << "Original Price:" << totalprice<<endl;
    if (totalprice > 200)
    {
        discount = totalprice - (totalprice * 0.20);
        cout << "Price after Discount: " << discount;
    }
}