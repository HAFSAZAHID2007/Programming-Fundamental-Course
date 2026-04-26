#include<iostream>
using namespace std;
string CheckAlphabetCase(char character);
main()
{
char c;
cout<<"Enter a  character (A/a)"<<endl;
cin>>c;
string result = CheckAlphabetCase(c);
cout<<result;
}
string CheckAlphabetCase(char character){
if (character == 'A')
{return "You have entered a capital A ";}
else if (character == 'a')
{
    return "You have entered a small a ";
}
else { return "Invalid input"; }
}