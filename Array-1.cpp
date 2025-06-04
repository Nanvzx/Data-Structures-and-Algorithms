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
//Second Largest element
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
// Check if the array is sorted
int isSorted(int n, vector<int> a){
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}

int removeDuplicates(vector<int> &arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isSorted(n,arr);
}