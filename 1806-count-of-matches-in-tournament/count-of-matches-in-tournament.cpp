class Solution {
public:
    int numberOfMatches(int n) {
        int c=0;
        int r=n;
        while(n!=1){
            int r=(int)(n/2);
            c+=r;
            n=n-r;
        }
        return c;
    }
};