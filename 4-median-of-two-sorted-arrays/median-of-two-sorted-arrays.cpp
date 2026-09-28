class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr = nums1;
        arr.insert(arr.end(), nums2.begin(), nums2.end());
        sort(arr.begin(),arr.end());
        int s=arr.size();
        if(s%2==0){
            int mid=s/2;
            return (float)(arr[mid]+arr[mid-1])/2;
        }
        else{
            return (float)arr[s/2];
        }
    }
};