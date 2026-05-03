#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in arrays in 0s and 1s ";
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    int  count0=0;
    for(int i=0;i<n;i++){
        if (arr[i]==1){
            count++;
        }
        else if (arr[i]==0){
            count0++;
    }
   
    

    }
    if(count>count0){
        cout<<"The consecutive number 1 is "<<count;
    }
    else{
        cout<<"The consecutive number 0 is "<<count0;
    }

}