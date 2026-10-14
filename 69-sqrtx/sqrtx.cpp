class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        if (x==1) return 1;
        int l=0;
        int h=x;
        while(l<=h){
            int mid=l+(h-l)/2;
            long long square = 1LL * mid * mid;

            if(square ==x) return mid;
            else if(square>x){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return h;
    }
};