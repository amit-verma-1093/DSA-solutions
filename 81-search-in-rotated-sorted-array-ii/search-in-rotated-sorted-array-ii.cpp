class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int a=false;
        int l=0;
        int h=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                a=true;
                break;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return a;

    }
};