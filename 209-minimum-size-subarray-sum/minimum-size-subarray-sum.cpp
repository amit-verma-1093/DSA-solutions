class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int sum = 0;
        int ans = INT_MAX;
        for (int h = 0; h < n; h++) {
            sum += nums[h];

            while (sum >= target) {
                ans = min(ans, h - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        if(ans==INT_MAX)  return 0;
        else return ans;
       }
};