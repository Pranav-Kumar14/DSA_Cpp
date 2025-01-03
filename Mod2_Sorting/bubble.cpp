#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0;  i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
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
    cout << "Unsorted array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }

    bubble_sort(arr, n);

    cout << "\n" << "Array after bubble sort : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}