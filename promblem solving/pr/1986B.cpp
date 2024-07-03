#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

vector<pair<int, int>> get_neighbors(int i, int j, int n, int m) {
    vector<pair<int, int>> neighbors;
    if (i > 0) neighbors.push_back({i - 1, j});
    if (i < n - 1) neighbors.push_back({i + 1, j});
    if (j > 0) neighbors.push_back({i, j - 1});
    if (j < m - 1) neighbors.push_back({i, j + 1});
    return neighbors;
}

pair<int, int> find_peak_cell(const vector<vector<int>>& matrix, int n, int m) {
    pair<int, int> peak_cell = {-1, -1};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            bool is_peak = true;
            for (const auto& neighbor : get_neighbors(i, j, n, m)) {
                int ni = neighbor.first;
                int nj = neighbor.second;
                if (matrix[i][j] <= matrix[ni][nj]) {
                    is_peak = false;
                    break;
                }
            }
            if (is_peak) {
                if (peak_cell.first == -1 || i < peak_cell.first || (i == peak_cell.first && j < peak_cell.second)) {
                    peak_cell = {i, j};
                }
            }
        }
    }
    return peak_cell;
}

void stabilize_matrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    while (true) {
        pair<int, int> peak_cell = find_peak_cell(matrix, n, m);
        if (peak_cell.first == -1) {
            break;
        }
        int i = peak_cell.first;
        int j = peak_cell.second;
        matrix[i][j] -= 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }
        stabilize_matrix(matrix);
        for (const auto& row : matrix) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
