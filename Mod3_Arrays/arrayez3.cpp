#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m){
    int i=0, j=0;
    vector<int> Union;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(Union.size()==0 || Union.back()!=arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else{
            if(Union.size()==0 || Union.back()!=arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        if(Union.back()!=arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        if(Union.back()!=arr2[j ])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

void Unioniser(){
    int n; 
    cout << "Enter the number of elements in the first array : ";
    cin >> n;
    int arr1[n];
    cout << "Enter the array elements : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    int m; 
    cout << "Enter the number of elements in the second array : ";
    cin >> m;
    int arr2[m];
    cout << "Enter the array elements : " << endl;
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of Array1 and Array 2 is : " <<endl;
    for(auto & val : Union){
        cout << val << " ";
    }
}

int missingNumber(int arr[], int n){
    int sum = (n*(n+1))/2;
    int s2=0;
    for(int i=0; i<n-1; i++){
        s2+=arr[i];
    }
    int missing = sum-s2;
    return missing;
}

//We can also use the XOR logic to find the missing number
void Misser(){
    int n; 
    cout << "Enter the value of N : ";
    cin >> n;
    int arr[n-1];
    cout << "Enter the Array elements (N-1 Entries): " << endl;
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    int missing = missingNumber(arr, n);
    cout << "The missing number is : " << missing << endl;
}

int findConsecOnes(int arr[], int n){
    int count = 0;
    int max_count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }
        else{
            count=0;
        }
        if(count>max_count){
            max_count= count;
        }
    }
    return max_count;
}

void Maxxer(){
    int n; 
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements (1s & 0s only) : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxy = findConsecOnes(arr, n);
    cout << "The Maximum count of consecutive 1s is " << maxy << endl; 
}

int getSingle(int arr[], int n){
    int xxor = 0;
    for(int i=0; i<n; i++){
        xxor = xxor ^ arr[i];
    }
    return xxor;
}

void Single(){
    int n; 
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements (including a single element) : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int singleaf = getSingle(arr, n);
    cout << "The Single element in the array is : " << singleaf <<endl;
}

int getLongestSubarr(int arr[], int n, long long k){
    int len=0;
    for(int i=0; i<n; i++){
        long long s = 0;
        for(int j=i; j<n; j++){
            s+=arr[j];
            if(s==k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}

void Subway(){
    int n; 
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter the sum Number : ";
    cin >> k;
    int longer = getLongestSubarr(arr, n, k);
    cout << "\n" << "The Length of the Longest Subarray found is : " << longer << endl;
}

int main(){
    Subway();
    return 0;
}