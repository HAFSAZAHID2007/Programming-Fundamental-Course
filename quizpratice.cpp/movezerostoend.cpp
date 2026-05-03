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
    int j =0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[j]=arr[i];
            j++;
        }
    }

        for(int i=j;i<n;i++){
    arr[i]=0;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<< " ";
        }
    }