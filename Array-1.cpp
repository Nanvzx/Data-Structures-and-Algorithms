#include<bits/stdc++.h>
using namespace std;

// largest element in an array
int largestele(vector<int> &arr,int n){
    int large = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    return large;
}

int secondlargest(vector<int> &arr,int n){
    int large = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    int sec = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>sec && arr[i]!=large){
            sec = arr[i];
        }
    }
    return sec;
}
int main(){
    int n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondlargest(arr,n);
}