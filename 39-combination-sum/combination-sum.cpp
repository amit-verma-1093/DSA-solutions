class Solution {
public:
     vector<vector<int>> ans;
    vector<int> temp;
    void helper(int i , int n , vector<int> arr,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(i>=n || target<0) return;

        if(arr[i]<=target){
            temp.push_back(arr[i]);

            helper(i,n,arr,target-arr[i]);
            temp.pop_back();

        }
        helper(i+1,n,arr,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        helper(0 ,n,candidates,target);
        return ans;
    
    }
};