#include<iostream>
using namespace std;
main(){
    int r;
    cout<<"Enter the row";
    cin>>r;
    int c;
    cout<<"Enter the column";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int largest=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }
        }
    }
    cout<<"Largest element is :"<<largest;

    
}