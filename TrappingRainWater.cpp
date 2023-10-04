#include <bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n){
    int lmax[n], rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    int water=0;

    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],arr[i]);
    }

    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);
    }

    for(int i=1;i<n-1;i++){
        water=water+(min(lmax[i],rmax[i])-arr[i]);
    }

    return water;
}

int main(){
    int arr[8]={10,5,0,8,9,4,0,5};
    int water=getWater(arr,8);
    cout<<"Water collected: "<<water;
    return 0;
}