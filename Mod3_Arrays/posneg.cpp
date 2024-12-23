#include<bits/stdc++.h>
using namespace std;

vector<int> rearragedBySign(vector<int> &a){
    int n = a.size();
    vector<int> ans(n, 0);
    int posIndex = 0; int negIndex = 1;
    for(int i=0; i<n ; i++){
        if(a[i]<0){
            ans[negIndex]=a[i];
            negIndex+=2;
        }
        else{
            ans[posIndex]=a[i];
            posIndex+=2;
        }
    }
    return ans;
}

vector<int> rearrangedIfUnequal(vector<int> &a, int n){
    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<n; i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    if(pos.size()<neg.size()){
        for(int i=0; i<pos.size(); i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index = pos.size()*2;
        for(int i=pos.size(); i<neg.size(); i++){
            a[index]=neg[i];
            index++;
        }
    }
    else{
        for(int i=0;i<neg.size();i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size();i<pos.size();i++){
            a[index] = pos[i];
            index++;
        }
    }
  return a;
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
    vector<int> ans = rearrangedIfUnequal(arr, n);
    for(auto &x : ans){
        cout << x << " ";
    }
    return 0;
}