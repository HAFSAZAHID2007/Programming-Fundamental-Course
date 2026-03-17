#include <iostream>
using namespace std;

main() {
    float n; 
     float c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    float p1,p2,p3,p4,p5;
    cout<<"Enter the number of integers: ";
    cin >> n;
  for (int i = 0; i < n; i++) {
    float num;
    cout<<"Enter number: ";
    cin >> num;

        if (num < 200)
           { c1++;}
        else if (num>=200 && num<=399)
           { c2++;}
        else if (num>=400 && num<=599)
            {c3++;}
        else if (num>600&& num<=799)
            {c4++;}
        else
            {c5++;}
    } 
    p1=(c1/n)*100;
    p2=(c2/n)*100;
    p3=(c3/n)*100;
    p4=(c4/n)*100;
    p5=(c5/n)*100;


    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    cout<<p4<<"%"<<endl;
    cout<<p5<<"%"<<endl;
}