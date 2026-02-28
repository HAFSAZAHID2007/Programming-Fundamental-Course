#include<iostream>
using namespace std;
main()
{
float N,M;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>N;
cout<<"Enter fruit price per kilogran (in coins): ";
cin>>M;
int totalKg_veg,totalKg_fruit;
cout<<"Enter total kilogram of vegetable:  ";
cin>>totalKg_veg;
cout<<"Enter total kilogram of fruit: ";
cin>>totalKg_fruit;
float earning;
earning= (N*totalKg_veg)+(M*totalKg_fruit);
float rps;
rps= earning/1.94;
cout<<"Total Earnings in Rupees (Rps): "<<rps;
}