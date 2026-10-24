
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        queue<pair<int, int>> q;

        for (int j = 0; j < n; j++) {
            if (board[0][j] == 'O') {
                q.push({0, j});
                board[0][j] = 'a';
            }

            if (board[m - 1][j] == 'O') {
                q.push({m - 1, j});
                board[m - 1][j] = 'a';
            }
        }

        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O') {
                q.push({i, 0});
                board[i][0] = 'a';
            }

            if (board[i][n - 1] == 'O') {
                q.push({i, n - 1});
                board[i][n - 1] = 'a';
            }
        }

        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            // Down
            if (x + 1 < m && board[x + 1][y] == 'O') {
                board[x + 1][y] = 'a';
                q.push({x + 1, y});
            }

            // Up
            if (x - 1 >= 0 && board[x - 1][y] == 'O') {
                board[x - 1][y] = 'a';
                q.push({x - 1, y});
            }

            // Right
            if (y + 1 < n && board[x][y + 1] == 'O') {
                board[x][y + 1] = 'a';
                q.push({x, y + 1});
            }

            // Left
            if (y - 1 >= 0 && board[x][y - 1] == 'O') {
                board[x][y - 1] = 'a';
                q.push({x, y - 1});
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == 'a')
                    board[i][j] = 'O';
            }
        }
    }
};
