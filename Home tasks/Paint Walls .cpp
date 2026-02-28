#include<iostream>
using namespace std;
main()
{
 int paintArea,width,height,numWalls;
 cout<<"Number square meters you can paint:";
 cin>>paintArea;
 cout<<"Width of a single wall (in meters): ";
 cin>>width;
 cout<<"Height of a single wall (in meters): ";
 cin>>height;
 numWalls=paintArea/(width*height);
 cout<<"Number of walls you can paint = " <<numWalls;
}