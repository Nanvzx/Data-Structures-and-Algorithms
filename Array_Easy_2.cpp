#include<bits/stdc++.h>
using namespace std;
//Left Rotate By one place
vector<int> rorateArray(vector<int> &arr){
    int temp = arr[0];
    int n = arr.size();
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]=temp;
    return arr;
}






//Main Function
int main(){
    int n;
    vector<int> arr(n);
    vector<int> temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    temp = rorateArray(arr);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i];
    }
}