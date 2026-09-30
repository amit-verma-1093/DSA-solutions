class Solution {
public:
    bool is_valid(int mid, vector<int>& piles, int h){
            long long time=0;
            
            for(long long i:piles){
                time+=((i+mid-1)/mid);
            
        }
        return (time<=h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long ans=-1;
        long long n=piles.size();
        long long low=1;
        long long high=0;
        for(int i=0;i<n;i++){
            high+=piles[i];
        }
        
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(is_valid(mid,piles,h)){
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