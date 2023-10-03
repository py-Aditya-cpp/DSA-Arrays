#include <bits/stdc++.h>
using namespace std;

// It works only if the frequencies are continuous

void ArrFreq(int arr[], int n){
    int freq=1,i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<": "<<freq<<endl;
        freq=1;
        i++;
    }
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<": "<<1;
    }
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Frequencies: "<<endl;
    ArrFreq(arr,n);
    return 0;
}