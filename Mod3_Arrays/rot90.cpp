#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
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
    cout<< "Original matrix : " <<endl;
    for (auto it : matrix){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout << "\n";
    }
    rotate(matrix);
    cout<< "Matrix after 90degree rotation : " <<endl;
    for (auto it : matrix){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout << "\n";
    }

    return 0;
}