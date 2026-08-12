 class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> result;
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        int dr[4] = {0, 1, 0, -1};   // right, down, left, up
        int dc[4] = {1, 0, -1, 0};

        int row = 0, col = 0, dir = 0;

        for (int i = 0; i < m * n; i++) {
            result.push_back(matrix[row][col]);
            vis[row][col] = true;

            int nextRow = row + dr[dir];
            int nextCol = col + dc[dir];

            if (nextRow < 0 || nextRow >= m ||
                nextCol < 0 || nextCol >= n ||
                vis[nextRow][nextCol]) {

                dir = (dir + 1) % 4;
                nextRow = row + dr[dir];
                nextCol = col + dc[dir];
            }

            row = nextRow;
            col = nextCol;
        }

        return result;
    }
};