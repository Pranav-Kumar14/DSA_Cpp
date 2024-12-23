#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatr(vector<vector<int>> &matrix, int n, int m){
    vector<int> row(n, 0);
    vector<int> col(m, 0);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
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
    vector<vector<int>> zero = zeroMatr(matrix, n, m);
    cout << "Matrix after setting row, cols to 0 " << endl;
    for (auto it : zero){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}