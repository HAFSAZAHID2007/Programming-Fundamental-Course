#include<iostream>
using namespace std;
string projectTimeCalculation(int neededHours, int days, int workers){
   float workingdays=days*0.9;
   float totalHours=workingdays*workers*10;
   if (totalHours >= neededHours){
    cout<<"Yes! "<<totalHours-neededHours<<" hours left";
   }
   else{
    cout<<"Not enough time! "<<neededHours-totalHours<<" hours needed ";
   }

}
main(){
 int h,d,w;
 cout<<"Enter needed hours: ";
 cin>>h;
 cout<<"Enter number of days of firm: ";
 cin>>d;
 cout<<"Enter number of workers: ";
 cin>>w;
 projectTimeCalculation(h,d,w);
}