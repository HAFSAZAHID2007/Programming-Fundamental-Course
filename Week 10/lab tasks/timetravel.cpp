#include <iostream>
using namespace std;
string timeTravel(int h, int m);
main()
{
    int hours;
    cout << "Enter the hours: ";
    cin >> hours;
    int minutes;
    cout << "Enter the minutes: ";
    cin >> minutes;
    timeTravel(hours, minutes);
}
string timeTravel(int h, int m)
{
    int totalMins = (h * 60 + m) + 15;
    int newHours = totalMins / 60;
    int newMins = totalMins % 60;
    cout << newHours << " : " << newMins;
}
