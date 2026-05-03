#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in arrays ";
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reverse array is : "<<endl;
    for (int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    
}