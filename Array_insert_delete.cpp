#include <bits/stdc++.h>
using namespace std;

int insert(int arr[], int cap, int n, int x, int pos){
    if(cap == n){
        return n;
    }
    int idx=pos-1;
    for(int i=0;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}

int del(int arr[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return n;
    }

    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    return n-1;
}

int main(){
    int arr[10]={5,8,10,48};
    int x,pos;
    cout<<"Enter value: ";
    cin>>x;
    cout<<"Enter position: ";
    cin>>pos;
    int cap=insert(arr,10,4,x,pos);
    for(int i=0;i<cap;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Element to be deleted":
    int k;
    cin>>k;
    cap=del(arr,10,k);
    for(int i=0;i<cap;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}