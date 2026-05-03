#include<iostream> 
using namespace std;
main()
{
    int n;
    int temp;
    cout << "Enter the number of elements";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 int first=-1;
 int second =-1;
 int third =-1;
    for (int i = 0; i < n; i++)
    {
        
            if (arr[i] > first)
            {
                third=second;
                second=first;
                first=arr[i];
                 
            }
           else if ( arr[i]>second){
            third=second;
            second=arr[i];
           }
           else if(arr[i]>third){
            third=arr[i];
           }
        
    }
    cout<<"3rd largest "<<third;

}