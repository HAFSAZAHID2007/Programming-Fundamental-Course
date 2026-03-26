#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of chords: ";
    cin>>n;
    string chords[100];
    cout << "Enter " <<n<< " chords,one per line:" << endl;
    for(int i=0;i<n;i++){
        cin>>chords[i];
    }
    for(int i=0;i<n;i++){
        if (chords[i][chords[i].length() - 1] != '7') 
        chords[i] = chords[i] + "7";
    }
    cout<<"Jazzified chords: [";
    for(int i=0;i<n;i++){
        cout<<chords[i]<<" , ";
    }
    cout<<"]";

}