#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int longestSuccessive(vector<int> &a){
    int n = a.size();
    if (n==0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }
    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int cnt = 1;
            int x  = it;
            while(st.find(x+1)!=st.end()){
                x++;
                cnt++; 
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

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
    int succ = longestSuccessive(arr);
    cout << "The longest consecutive sequence is : " << succ << endl;
    return 0;
}