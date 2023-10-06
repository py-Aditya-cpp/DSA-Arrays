#include <bits/stdc++.h>
using namespace std;

int normalSumSubarray(int arr[], int n){
    int maxEnding=arr[0], res=arr[0];
    for(int i=0;i<n;i++){
        maxEnding=max(arr[i], maxEnding+arr[i]);
        res=max(res, maxEnding);
    }
    return res;
}

int totalSumSubarray(int arr[], int n){
    int normalSum = normalSumSubarray(arr,n);
    if(normalSum<0){
        return normalSum;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    int circularSum=normalSumSubarray(arr,n);
    return max(normalSum,circularSum);
}

int main(){
    int arr[5]={8,-4,3,-5,4};
    cout<<totalSumSubarray(arr,5);
    return 0;
}