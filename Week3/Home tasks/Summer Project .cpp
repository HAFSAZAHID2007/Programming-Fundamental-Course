#include<iostream>
using namespace std;
main()
{
float cost,weight,area;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>weight;
cout<<"Enter the cost of the bag: $";
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
float fertilizer_cost;
fertilizer_cost=cost/weight;
cout<<"Cost of fertilizer per pound: $"<<fertilizer_cost<<endl ;
float fertilizerPersquare;
fertilizerPersquare=cost/area;
cout<<"Cost of fertilizing per square foot is : $"<<fertilizerPersquare;
}