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
    int num;
    for(int i = 0;i<n;i++){
        num = num*10+arr[i];
        
    }
    num=num+1;
    cout<<num;
}
