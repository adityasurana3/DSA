#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int start = 0;
    int row = matrix.size();
    int col = matrix[0].size();
    int end = row * col - 1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        int element = matrix[mid / col][mid % col];
        if (element == target) {
            return true;
        }
        if (element < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return false;
}

int main() {
    int numRows, numCols, target;
    
    cout << "Enter the number of rows in the matrix: ";
    cin >> numRows;
    
    cout << "Enter the number of columns in the matrix: ";
    cin >> numCols;

    vector<vector<int>> matrix(numRows, vector<int>(numCols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target value to search for: ";
    cin >> target;

    bool result = searchMatrix(matrix, target);

    if (result) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
