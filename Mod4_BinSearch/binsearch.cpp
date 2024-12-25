#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int> &nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int recBinSearch(vector<int> &nums, int low, int high, int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(nums[mid]==target) return mid;
    else if(target>nums[mid]) return recBinSearch(nums, mid+1, high, target);
    return recBinSearch(nums, low, mid-1, target);

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
    int target;
    cout << "Enter the element to be found : ";
    cin >> target;
    int ind = binSearch(arr, target);
    if (ind==-1) cout << "The target is not present in the array" << endl;
    else cout << "The target is at the index : " << ind << endl;
    return 0;
}