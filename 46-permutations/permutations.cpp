class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited;
    void helper(int i, int n, vector<int> nums) {
        if (i >= n) {
            ans.push_back(temp);
        }
        for (int j = 0; j < n; j++) {
            // value is used
            if (visited[j] == false) {
                temp.push_back(nums[j]);
                // markerd value
                visited[j] = true;
                helper(i + 1, n, nums);
                temp.pop_back();
                // visited remove
                visited[j] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        visited.resize(n, false);
        helper(0, n, nums);
        return ans;
    }
};