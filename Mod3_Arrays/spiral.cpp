#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &matrix){
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0, left = 0, bottom = n-1, right = m-1;
    

}

int main(){
    int n, m, x;
    cout << "Enter the number of rows and columns of the matrix : " ;
    cin >> n >> m;
    cout << "Enter the elements of the array: " << endl;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
        temp.clear();
    }
    return 0;
}