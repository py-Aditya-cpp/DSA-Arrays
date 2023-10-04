#include <bits/stdc++.h>
using namespace std;

int maxSubarr(int arr[], int n){
    int res=arr[0];
    int maxending=arr[0];

    for(int i=1;i<n;i++){
        maxending=max(maxending+arr[i],arr[i]);
        res=max(res,maxending);
    }
    return res;
}

int main(){
    int arr[10]={2,1,-3,5,-8,7,9,0,-4,6};
    cout<<maxSubarr(arr,10);
    return 0;
}