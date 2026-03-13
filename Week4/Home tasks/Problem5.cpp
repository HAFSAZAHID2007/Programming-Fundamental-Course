#include <iostream>
using namespace std;
main()
{
    int holidays, workingDays, time, difference, hours, mins;
    cout << "Holidays:";
    cin >> holidays;
    workingDays = 365 - holidays;
    time = (workingDays * 63) + (holidays * 127);
    difference=30000-time;
    hours = difference / 60;
    mins = difference % 60;
    if (time <= 30000)
    {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hour and " << mins << " minutes  less for play";
    }
    else
    {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << mins << " minutes for play";
    }
}