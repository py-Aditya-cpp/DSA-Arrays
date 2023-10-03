#include <bits/stdc++.h>
using namespace std;

int second_largest(int arr[],int n){
    int res=-1, largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]<arr[largest]){
            if(res==-1 || arr[res]<arr[i]){
                res=i;
            }
        }
    }
    return res;
}

int main(){
    int arr[6]={5,18,7,4,89,54};
    int sec_largest=second_largest(arr,6);
    cout<<arr[sec_largest];
    return 0;
}