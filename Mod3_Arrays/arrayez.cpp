#include<bits/stdc++.h>
using namespace std;

int smallest(int arr[], int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int largest(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int secondLargest(int arr[], int n){
    int larg = largest(arr, n);
    int sec_larg = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>sec_larg && arr[i]!=larg){
            sec_larg=arr[i];
        }
    }
    return sec_larg;
}

int secondSmallest(int arr[], int n){
    int small = smallest(arr, n);
    int sec_small = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<sec_small && arr[i]!=small){
            sec_small=arr[i];
        }
    }
    return sec_small;
}

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int removeDupes(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
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
    cout << "Largest element : " << largest(arr, n) << endl;
    cout << "Smallest element : "<< smallest(arr, n) <<endl;
    cout << "Second largest element : " << secondLargest(arr, n) << endl;
    cout << "Second smallest element : " << secondSmallest(arr, n) << endl;
    string sorted = isSorted? "Yes" : "No";
    cout << "Array Sorted : " << sorted <<endl;
    int k = removeDupes(arr, n);
    cout << "Array after removing the duplicates is : " <<endl;
    for(int i=0; i<k; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}