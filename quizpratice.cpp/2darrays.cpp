#include<iostream>
using namespace std;
main(){ // arr intialization and declaration
int marks [2][2]={
{1,2},
{3,4}
};
cout<<marks[1][0]<<endl;  // accessing elements

// taking input 
int arr[2][3];
for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}

//displaying output
for (int i =0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}