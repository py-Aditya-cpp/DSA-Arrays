#include <bits/stdc++.h>
using namespace std;

//An element is called majority if it appears more than N/2 times in the array

int findMajority(int arr[], int n){
    int res=0, count =1;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }

    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[res]){
            count++;
        }
    }

    if(count<=n/2){
        res = -1;
    }

    return arr[res];
}

int main(){
    int arr[10]={2,5,2,5,5,7,5,5,4,5};
    cout<<findMajority(arr,10);
    return 0;
}