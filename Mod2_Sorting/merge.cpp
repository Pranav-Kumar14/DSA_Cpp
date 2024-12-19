#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
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
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void merge_sort(vector<int> &arr, int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n, x;
    cout << "Enter the number of elements you want in the array : ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the elements of the array :" << endl;
    for(int i=0; i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    cout << "Unsorted array is : " << endl;
    for(int y: arr){
        cout << y << " ";
    }
    merge_sort(arr, 0, n-1);
    cout << "\n" <<  "Merge Sorted array is : " << endl;
    for(int y: arr){
        cout << y << " ";
    }
    return 0;
}