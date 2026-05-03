#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int g;
    cout << "Enter group size:";
    cin >> g;
    
        for (int i=0;i<n;i+=g){
            int start=i;
            int end =i+g-1;
              if(end>=n){
                end=n-1;
            }
           
           while(start < end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
           }
          
        }
        cout<<"Result: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        }
