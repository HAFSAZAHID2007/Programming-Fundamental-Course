#include <iostream>
using namespace std;
main()
{
    int monthlySalary = 10000;
    int laptopPrice = 50000;
    float advanced;
    float advancedAmount;
    int months;
    advanced = monthlySalary * 0.50;
    advancedAmount = advanced * 6;

    if (advancedAmount >= laptopPrice)
    {
        cout << "Ali can buy laptop ";
    }
    if (advancedAmount < laptopPrice)
    {
        months = laptopPrice / advanced;
        cout << "Months required to buy laptop: " << months;
    }
}