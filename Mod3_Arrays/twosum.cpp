#include <bits/stdc++.h>
using namespace std;

string two_sum(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}

vector<int> two_sum_arr(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return vector<int>{i, j};
            }
        }
    }
    return vector<int>{-1, -1};
}

void two_summer(){
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
    cout << "Enter the target to be found: ";
    cin >> target;
    
    string ans = two_sum(n, arr, target);
    vector<int> a = two_sum_arr(n, arr, target);
    
    cout << "Target Found: " << ans << endl;
    if(a[0]!=-1){
    cout << "Found at positions: " << a[0]+1 << " and " << a[1]+1 << endl;
    }
}

int main() {
    two_summer();
    return 0;
}
