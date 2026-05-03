#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers : ";
    for (int i =0; i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int secondlargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>secondlargest && arr[i] != largest)
        {
            secondlargest=arr[i];
        }
    }
        cout<<"Second largest is : "<<secondlargest;
    
}