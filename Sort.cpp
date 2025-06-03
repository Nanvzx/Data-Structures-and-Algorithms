#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[i]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

    }
}

void bubble_sort(int arr[],int n){
    for(int i=n-1;i<=1;i--){
        for(int j=0;j<=i-1;i++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}


void mS(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid = (high + low) / 2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    mS(arr,low,mid,high);
}
void mergeSort(vector<int> &arr,int n){
    ms(arr,0,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
       cin>>arr[i];
    }
    insertion_sort(arr,n);    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}