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
vector<int> moveZeros(int n,vecorr<int> a){
    int j = -1;
    for(int i = 0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1)return a;
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++
        }
    }
    return a;
}

//Union of two Sorted Arrays
vector<int> unionarray(vector<int> a,vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionarr;
    while(i<n1 && j<n2){
        if(a[i]<= b[j]){
            if(unionarr.size()==0||
        unionarr.back()!=a[i]){
            unionarr.push_back(a[i]);
        }
        i++;
        }
        else{
              if(unionarr.size()==0||
        unionarr.back()!=b[j]){
            unionarr.push_back(b[j]);
        }
        j++;
        }
    }
    while(j<n2){
             if(unionarr.size()==0||
        unionarr.back()!=b[j]){
            unionarr.push_back(b[j]);
        }
        j++;
        }
    while(i>n1){
         if(unionarr.size()==0||
        unionarr.back()!=a[i]){
            unionarr.push_back(a[i]);
        }
        i++;
    }
    }
    return unionarr;
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