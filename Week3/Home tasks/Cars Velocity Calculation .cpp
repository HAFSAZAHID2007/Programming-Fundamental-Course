#include<iostream>
using namespace std;
main()
{
int acc,time,intial_velocity,final_velocity;
cout<<"Enter Initial Velocity (m/s): ";
cin>>intial_velocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acc;
cout<<"Enter Time (s): ";
cin>>time;
final_velocity=acc*time+intial_velocity;
cout<<"Final Velocity (m/s): " <<final_velocity;
}