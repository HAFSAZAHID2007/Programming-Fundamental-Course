#include<iostream>
using namespace std;
main()
{
 int paintArea,width,height,paintedWalls;
 cout<<"Enter paint area:";
 cin>>paintArea;
 cout<<"Enter width: ";
 cin>>width;
 cout<<"Enter height: ";
 cin>>height;
 paintedWalls=paintArea/(width*height);
 cout<<"Walls painted = " <<paintedWalls;
}