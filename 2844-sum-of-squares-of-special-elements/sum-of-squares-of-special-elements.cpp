class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(n%(i+1)==0){
                c+=nums[i]*nums[i];
            }
        }
        return c;
    }
};