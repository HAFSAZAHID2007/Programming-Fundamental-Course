#include<iostream>
using namespace std;
main()
{
int age,moves,years;
cout<<"Enter the person age: ";
cin>>age;
cout<<"Enter the number of times they have moved: ";
cin>>moves;
years=age/(moves+1);
cout<<"Average number of years lived in the same house : " <<years;
}