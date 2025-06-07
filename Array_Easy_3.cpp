#include<bits/stdc++.h>
using namespace std;

//Missing number in an array
int missingNumber(vector<int> &a,int n){
    int xor1=0;
    int xor2=0;
    for(int i = 0;i<n;i++){
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);
    }
    return xor1 ^ xor2;
}
// Finding the max consecutive ones
int findmaxones(vector<int> &arr){
    int maxi =0;
    int cnt = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==1){
            cnt ++;
            maxi = max(maxi,cnt); 
        }
        else{
            cnt = 0;
        }
    }
    return maxi;
}









int main(){
    int n;
    vector<int> arr(n);
    vector<int> temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    missingNumber(arr,n);
    }
