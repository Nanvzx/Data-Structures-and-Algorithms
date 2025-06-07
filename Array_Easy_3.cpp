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










int main(){
    int n;
    vector<int> arr(n);
    vector<int> temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    missingNumber(arr,n);
    }
