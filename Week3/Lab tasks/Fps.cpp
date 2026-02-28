#include<iostream>
using namespace std;
main()
{
int mins,fps,frames;
cout<<"Enter minutes: ";
cin>>mins;
cout<<"Enter fps: ";
cin>>fps;
frames=mins*fps*60;
cout<<"Total frames = "<<frames;
}