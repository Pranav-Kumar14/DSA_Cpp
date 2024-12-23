#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n){
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max=arr[i];
        }
    }
    return ans;
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
    vector<int> ans = leaders(arr, n);
    cout << "The array containing leaders is : " <<endl;
    for(auto &x : ans){
        cout << x << " ";
    }
    return 0;
}