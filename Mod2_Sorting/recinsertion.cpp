#include<bits/stdc++.h>
using namespace std;

void rec_insertion_sort(int arr[], int i, int n){
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;    
    }
    rec_insertion_sort(arr, i+1, n);
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
    cout << "Unsorted array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }

    rec_insertion_sort(arr, 0, n);

    cout << "\n" << "Array after insertion sort : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}