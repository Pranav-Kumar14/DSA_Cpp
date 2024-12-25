#include<bits/stdc++.h>
using namespace std;

int rotBinSearch(vector<int> &arr, int n, int k){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k) return mid;
        if(arr[low] <= arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int findMin(vector<int> &arr, int n){
    int low=0, high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[high]){
            ans = min(ans, arr[low]);
            break;
        }
        if(arr[low]<=arr[mid]){
            ans = min(ans, arr[low]);
            low = mid+1;
        }
        else{
            ans = min(ans, arr[mid]);
            high = mid-1;
        }
    }
    return ans;
}

int findRot(vector<int> &arr, int n){
    int low=0, high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[high]){
            index = low;
            ans = min(ans, arr[low]);
            break;
        }
        if(arr[low]<=arr[mid]){
            index = low;
            ans = min(ans, arr[low]);
            low = mid+1;
        }
        else{
            index = mid;
            ans = min(ans, arr[mid]);
            high = mid-1;
        }
    }
    return index;
}

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];
    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])
                || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
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
    int target;
    cout << "Enter the element to be found : ";
    cin >> target;
    int found = rotBinSearch(arr, n, target);
    if(found==-1){
        cout << "Not found!" << endl;
    }
    else{
        cout << "Found at index : " << found << endl;
    }
    int mini = findMin(arr, n);
    cout << "Minimum number in the array is : " << mini << endl;
    int rota = findRot(arr, n);
    cout << "The array has been rotated : " << rota << " times." << endl;
    int singa = singleNonDuplicate(arr);
    cout << "The non duplicated item is : " << singa << endl;
    return 0;
}