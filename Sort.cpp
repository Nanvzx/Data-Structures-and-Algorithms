#include<bits/stdc++.h>
using namespace std;
//Selection Sort
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
//Bubble Sort
void bubble_sort(int arr[],int n){
    for(int i=n-1;i<=1;i--){
        for(int j=0;j<=i-1;i++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}
//Insertion Sort
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
// Merge Sort
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<= mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i =low ; i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void mS(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid = (high + low) / 2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void mergeSort(vector<int> &arr,int n){
    mS(arr,0,n-1);
}
//Quick Sort
int part(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<= pivot && i<= high-1){
           i++; 
        }
        while(arr[j]> pivot && j > low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int pindex= part(arr,low,high);
        qs(arr,low,pindex-1);
        qs(arr,pindex+1,high);
    }
}
vector<int> quicksort(vector<int> arr,int n){
    qs(arr,0,arr.size()-1);
    return arr;
}



//Main Function
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
       cin>>arr[i];
    }
    quicksort(arr,n);    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}