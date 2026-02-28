#include<iostream>
using namespace std;
main()
{
float volts,current,power;
cout<<"Enter Voltage (in volts): ";
cin>>volts;
cout<<"Enter the Current (in Amperes): ";
cin>>current;
power=volts*current;
cout<<"The power is "<<power<<" watts";
} 