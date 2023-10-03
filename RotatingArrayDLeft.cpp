#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int arr[], int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void RotateArrayDLeft(int arr[], int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main(){
    int arr[5]={1,5,88,6,4};
    int d;
    cout<<"d: ";
    cin>>d;
    RotateArrayDLeft(arr,5,d);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}