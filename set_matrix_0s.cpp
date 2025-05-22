#include <bits/stdc++.h>
using namespace std;

//brute force
void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
    // set all non-zero elements as -1 in the row i:
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}


void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    // set all non-zero elements as -1 in the col j:
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

void setZeroes(vector<vector<int>>& matrix) {

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:
    int n = matrix.size();
    int m =  matrix[0].size();
    bool flag = false;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m ; j++) {
            if (matrix[i][j] == 0) {
                flag = true;
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }

    // Finally, mark all -1 as 0:
    if (flag == true){
        for (int i = 0; i < n; i++) {
            
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}
//leetcode top solution
//     void setZeroes(vector<vector<int>>& matrix) {
//         set<int> rows;
//         set<int> cols;

//         for (int i = 0; i < matrix.size(); i++) {
//             for (int j = 0; j < matrix[0].size(); j++) {
//                 if (matrix[i][j] == 0) {
//                     rows.insert(i);
//                     cols.insert(j);
//                 }
//             }
//         }

//         for (int i = 0; i < matrix.size(); i++) {
//             for (int j = 0; j < matrix[0].size(); j++) {
//                 if (rows.find(i) != rows.end() || cols.find(j) != cols.end()) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };

//optimized approach
// void setZeroes(vector<vector<int>>& matrix) {
//         int const n = matrix.size();
//         int const m  = matrix[0].size();
//         vector<int> r(n, 0);
//         vector<int> c(m, 0);

//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(matrix[i][j] == 0){
//                     r[i] = 1;
//                     c[j] = 1;
//                 }
//             }
//         }

//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(r[i] || c[j]) matrix[i][j] = 0;
//             }
//         }

// }


int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    vector<vector<int>> mat2 = {{-1}, {2}, {3}};
    // int n = matrix.size();
    // int m = matrix[0].size();
    setZeroes(matrix);
    setZeroes(mat2);

    cout << "The Final matrix is: \n";
    for (auto it : mat2) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}