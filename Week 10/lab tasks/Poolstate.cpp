#include <iostream>
using namespace std;
void calculatePoolState(int V, int P1, int P2, double H);
main()
{
    int volume;
    cout << "Enter volume of the pool in liters: ";
    cin >> volume;
    int Pipe1;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> Pipe1;
    int Pipe2;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> Pipe2;
    float hours;
    cout << "Enter hours that the worker is absent: ";
    cin >> hours;
    calculatePoolState(volume, Pipe1, Pipe2, hours);
}
void calculatePoolState(int V, int P1, int P2, double H)
{
    int totalWater = (P1 + P2) * H;
    if (totalWater <= V)
    {
        int poolPercentage = (totalWater*100)/V;
        int Pipe1Percent = (P1 * H / totalWater) * 100;
        int Pipe2Percent = (P2 * H / totalWater) * 100;
        cout << "The pool is " << poolPercentage << "% full. Pipe 1: " << Pipe1Percent << "%.Pipe2:" << Pipe2Percent << "%.";
    }
    else
    {
        int overflow = totalWater - V;
        cout << "For " << H << ", the pool overflows with " << overflow << " liters.";
    }
}