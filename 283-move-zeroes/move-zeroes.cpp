class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();

   
            
        int i=0,j=1;
        while(j<n){
            if(nums[i]==0){
                if(nums[j]==0){
                    j++;
                }
                else{
                nums[i]=nums[j];
                nums[j]=0;
                
                i++;
                j++;}
            }
            else{
                i++;
                j++;}
        }
    }
};