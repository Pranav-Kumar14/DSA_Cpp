#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low;
    int j = high - 1;
        
    while (i <= j) {
        while (arr[i] <= pivot && i <= j) {
            i++;
        }
        while (arr[j] > pivot && j >= i) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

void qs(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pIndex = partition(arr, low, high);
            qs(arr, low, pIndex - 1);
            qs(arr, pIndex + 1, high);
        }
    }

vector<int> quick_sort(vector<int> &arr){
    qs(arr, 0, arr.size()-1);
    return arr;
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
    arr = quick_sort(arr);
    cout << "\n" <<  "Quick Sorted array is : " << endl;
    for(int y: arr){
        cout << y << " ";
    }
    return 0;
}