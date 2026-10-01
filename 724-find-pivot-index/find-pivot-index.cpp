class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        vector<int> pre1(n + 1, 0);
        vector<int> pre2(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pre1[i + 1] = pre1[i] + nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            pre2[i] = pre2[i + 1] + nums[i];
        }

        for (int i = 0; i < n; i++) {
            int leftSum = pre1[i];
            int rightSum = pre2[i + 1];

            if (leftSum == rightSum) {
                return i;
            }
        }

        return -1;
    }
};