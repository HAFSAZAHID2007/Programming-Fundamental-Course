#include<iostream>
using namespace std;
main(){
    int arr[2][2];
    cout<<"Enter the elements of matrix";
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int sum =0;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<"the total sum of an elements is " <<sum;


}
