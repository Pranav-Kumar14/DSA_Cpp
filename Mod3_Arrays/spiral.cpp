#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &matrix) {
    vector<int> ans;
    int n = matrix.size();
    if (n == 0) return ans; // Handle empty matrix
    int m = matrix[0].size();
    
    int top = 0, left = 0, bottom = n - 1, right = m - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    int n, m, x;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    if (n <= 0 || m <= 0) { // Input validation
        cout << "Invalid matrix dimensions!" << endl;
        return 0;
    }

    cout << "Enter the elements of the array:" << endl;
    vector<vector<int>> matrix(n, vector<int>(m)); // Use fixed size for the matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> sp = spiral(matrix);
    cout << "Spiral Order: ";
    for (auto &x : sp) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
