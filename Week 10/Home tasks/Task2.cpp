#include<iostream>
using namespace std;
int volume(float l,float w,float h, string unit){
         float v = (l*w*h)/3;
         if (unit == "millimeters"){v=v*1000000000;}
         else if (unit == "centimeters"){v=v*1000000;}
          else if (unit == "meters"){v=v;}
          else if (unit == "kilometers"){v=v/100000000;}
          return v;
}
main(){
    float length,width,height;
    cout<<" Enter length width height (in meters): ";
    cin>>length;
    cin>>width;
    cin>>height;
    string u;
    cout<<"Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>u;
    cout<<volume(length,width,height,u) <<" cubic "<<u;
}