#include<iostream>
#include<cmath>
using namespace std;
 float height (  float distance, float angle); 
main(){
    float d;
    cout<<"Enter the distance from the base of tree (in feet): ";
    cin >> d;
    float angle;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    cout<<"The height of the tree is : "<< height(d,angle) <<" 8feet";  
} 
    float height (  float distance, float angle){
    float  b =  angle* 3.14/180;
     float a=tan(b);
     int h = a*distance;
     return h;
}
