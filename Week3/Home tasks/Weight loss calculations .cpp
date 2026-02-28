#include<iostream>
using namespace std;
main()
{
string name;
float target,days;
cout<<"Enter the Name of the Person: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>target;
days=target * 15;
cout<<name<<" will need "<<days<<" day to loss "<<target<<" kg of weight by following the doctor suggestions";
}