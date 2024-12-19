#include<bits/stdc++.h>
using namespace std;

void rec_bubble_sort(int arr[], int n){
    if(n==1) return;
    for(int j=0; j<=n-2; j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j]=temp;
        }
    }
    rec_bubble_sort(arr, n-1);
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

    rec_bubble_sort(arr, n);

    cout << "\n" << "Array after bubble sort : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}