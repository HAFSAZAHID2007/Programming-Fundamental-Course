#include <iostream>
using namespace std;
main()
{
    string country;
    int ticketPrice, discount, final;
    cout << "Country: ";
    cin >> country;
    cout << "Ticket Price: ";
    cin >> ticketPrice;
    if (country == "Ireland")
    {
        discount = ticketPrice * 0.10;
    }
    if (country != "Ireland")
    {
        discount = ticketPrice * 0.05;
    }
    final = ticketPrice - discount;
    cout << "Discounted Price: " << final;
}