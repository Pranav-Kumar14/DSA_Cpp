#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int upperBound(vector<int> &arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int findFloor(vector<int> &arr, int n, int x){
    int low =0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=x){
            ans = arr[mid];
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int findCeil(vector<int> &arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            ans = arr[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

pair<int, int> getFloorCeil(vector<int> &arr, int n, int x){
    int f = findFloor(arr, n, x);
    int c = findCeil(arr, n, x);
    return make_pair(f, c);
}

int firstOcc(vector<int> &arr, int n, int k){
    int low = 0, high = n-1;
    int first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            first = mid;
            high = mid-1;
        }
        else if(arr[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return last;
}

pair<int, int> firstAndLast(vector<int> &arr, int n, int k){
    int first = firstOcc(arr, n, k);
    if(first==-1) return {-1, -1};
    int last = lastOccurrence(arr, n, k);
    return {first, last};

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
    cout << "Enter the element whose lower bound has to be found : ";
    cin >> target;
    int lower, upper;
    lower = lowerBound(arr, n, target);
    cout << "The index of lower bound of the target is : " << lower << endl;
    upper = upperBound(arr, n, target);
    cout << "The index of upper bound of the target is : " << upper << endl;
    pair<int, int> flonce = getFloorCeil(arr, n, target);
    cout << "Floor : " << flonce.first << " | Ceil : " << flonce.second << endl;
    pair<int, int> occ = firstAndLast(arr, n, target);
    cout << "First Occurence : " << occ.first << " | Last Occurence : " << occ.second << endl;
}