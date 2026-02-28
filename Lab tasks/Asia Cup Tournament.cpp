#include<iostream>
using namespace std;
main()
{
  int wins,draws,losses;
  cout<<"Enter the number of wins: ";
  cin>>wins;
  cout<<"Enter the number of draws: ";
  cin>>draws;
  cout<<"Enter the number of losses: ";
  cin>>losses;
  int points;
  points=(wins)*3+(draws)*1+(losses)*0;
  cout<<"Pakistan has obtained "<<points<<" in Asia Cup Tournament";
}