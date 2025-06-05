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
//Left Rotate array by D places
  void reverse(vector<int>& arr,int i,int j)
    {
        while(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
  
    void rotateArr(vector<int>& arr, int d) {
       
        int n = arr.size();
        d = d % n;
        reverse(arr, 0 , d - 1);
        reverse(arr, d , arr.size() - 1);
        reverse(arr, 0, arr.size() - 1);
        
    }

//Move all zeros to the end of the array



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