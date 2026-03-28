#include<iostream>
using namespace std;
main(){
    int n=5;
    string name[5];
    cout<<"Enter names of 5 students:"<<endl;
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    cout<<"Student names are : ";
    for(int i=0;i<n;i++){
        cout<<name[i]<<endl;
    }
    }