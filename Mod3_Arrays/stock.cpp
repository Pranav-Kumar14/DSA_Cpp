#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr, int n){
    int maxPro=0;
    int minPrice = INT_MAX;
    for(int i=0; i<n; i++){
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i]-minPrice);
    }
    return maxPro;
}

int main(){
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int max = maxProfit(arr, n);
    cout << "The maximum profit that can be generated is : " << max <<endl;
    return 0;
}