class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     auto  i=(lower_bound(nums.begin(),nums.end(),target));
     auto j = upper_bound(nums.begin(), nums.end(), target);
     if(i==j){
        return {-1,-1};

     }  
     int x=i - nums.begin();
     int y=j - nums.begin()-1;
     return {x,y};
    }
};