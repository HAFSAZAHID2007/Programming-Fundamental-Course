#include<iostream>
using namespace std;
main()
{
int population,birth_rate,decade;
cout<<"Enter the current world population: ";
cin>>population;
cout<<"Enter the monthly birth rate (number of births per minth): ";
cin>>birth_rate;
decade=population+(birth_rate*30*12);
cout<<"Population in three decades wil be: "<<decade;
}