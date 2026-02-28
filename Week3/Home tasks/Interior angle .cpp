#include<iostream>
using namespace std;
main()
{
int sides,interior_angle;
cout<<"Enter the number of sides of the polygon: ";
cin>>sides;
interior_angle=(sides-2)*180;
cout<<"The total sum of internal angles of a : " <<sides<<"-sided polygon is : " <<interior_angle<<" sdegrees";
} 