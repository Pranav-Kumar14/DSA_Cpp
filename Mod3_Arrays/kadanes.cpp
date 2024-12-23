#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> &arr, int n){
    long long maxi = LONG_MIN;
    long long sum =0;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for(int i=0; i<n; i++){
        if(sum==0) start = i;
        sum+=arr[i];
        if(sum>maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0){
            sum =0;
        }
        if(maxi<0) maxi = 0;
    }
    cout <<  "The Subarray is : [ ";
    for(int i=ansStart; i<=ansEnd; i++){
        cout << arr[i] << ", ";
    }
    cout << "]\n";
    return maxi;
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
    long long maxsum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is : " << maxsum << endl;
    return 0;
}