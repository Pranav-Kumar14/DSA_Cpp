#include<bits/stdc++.h>
using namespace std;

int maj_elem(vector<int> &arr, int n){
    int cnt = 0;
    int ele;
    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt = 1;
            ele = arr[i];
        }
        else if(ele==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0; i<n; i++){
        if(arr[i]==ele)   cnt1++;
    }
    if(cnt1>(n/2))  return ele;
    return -1;
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
    int element = maj_elem(arr, n);
    cout << "The Majority element is : " << element << endl; 
    return 0;
}