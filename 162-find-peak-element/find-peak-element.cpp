class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>copy=nums;
        sort(nums.begin(),nums.end());
       int  max=nums[nums.size()-1];

       for(int i=0;i<copy.size();i++){
        if(copy[i]==max){
            return i;
        }
       }
       return 0;
    }
};