class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }

        sort(nums.begin(),nums.end());

        int i=0,j=n-1;
        int a[2];
        while(i!=j){
            if ((nums[i]+nums[j])==target){
                 a[0]=nums[i];
                 a[1]=nums[j];
                 break;}
            else if((nums[i]+nums[j])>target) j--;
            else i++;
        }
        int ans1=-1;
        int ans2=-1;
        for (int i=0;i<n;i++){
            if(a[0]==arr[i]){
                ans1=i;
                break;}}
        for(int i=0;i<n;i++){
            if((i!=ans1) && (a[1]== arr[i])){
                ans2=i;
                break;}
        }
        if (ans1!=-1 && ans2!=-1)
            return {ans1,ans2};
        else
            return{};
    }
};