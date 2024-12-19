#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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

    selection_sort(arr, n);

    cout << "\n" << "Array after selection sort : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}
