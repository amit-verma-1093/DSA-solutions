class Solution {
public:
    bool is_valid(int mid, vector<int>& weights, int days){
            long long d=1,curr=0;
            int n=weights.size();
            for(int i=0;i<n;i++){
                if(curr+weights[i]>mid){
                    d+=1;
                    curr=weights[i];
                }
                else{
                    curr+=weights[i];
                }
            }
            return (d<=days);
        }
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=INT_MAX;
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(is_valid(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};