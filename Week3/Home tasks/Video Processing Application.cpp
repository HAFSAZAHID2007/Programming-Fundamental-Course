#include<iostream>
using namespace std;
main()
{
int mins,frames,total_frames;
cout<<"Number of Minutes: ";
cin>>mins;
cout<<"Frames per Second: ";
cin>>frames;
total_frames=mins*frames*60;
cout<<"Total Number of Frames: "<<total_frames;
}