#include<bits/stdc++.h>
using namespace std;

void left_rot(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void right_rot(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-1; i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

void reverse(int arr[], int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotk_left(int arr[], int n, int k){
    k = k%n;
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);
}

void rotk_right(int arr[], int n, int k){
    k = k%n;
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1);
}

vector<int> moveZeroes(vector<int> a, int n){
    int j=-1;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return a;
    for(int i = j+1; i<n; i++){
        if(a[i]!=0){
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

void linear_search(int arr[], int n, int ele){
    int i;
    for(i=0; i<n;i++){
        if(arr[i]==ele){
            cout << "Found " << ele << " at index" << i <<endl;
            break;
        }
    }   
    if(i==n){
        cout << ele << " not found." << endl;
    } 
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    left_rot(arr, n);
    cout << "Array after left rotation : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    right_rot(arr, n);
    cout << "Array after right rotation : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int k;
    cout << "Enter the value of k for rotation : ";
    cin >> k;
    rotk_left(arr, n, k);
    cout << "Array after " << k << " left rotations : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    rotk_right(arr, n, k);
    cout << "Array after " << k << " right rotations : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int ele;
    cout << "Enter element to be found : ";
    cin >> ele;
    linear_search(arr, n, ele);
    vector<int> varr;
    for(int i=0; i<n; i++){
        varr.push_back(arr[i]);
    }
    vector<int> zarr = moveZeroes(varr, n);
    cout << "Moving Zeroes to the end : " << endl;
    for(auto &x : zarr){
        cout << x << " ";
    }
}