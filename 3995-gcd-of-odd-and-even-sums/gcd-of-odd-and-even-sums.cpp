class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=0;
        int o=0;
        int i=1;
        while(i<n+1){
            e+=2*i-1;
            o+=2*i;
            i++;
        }
        for(int i=min(e,o);i>0;i--){
            if(o%i==0 && e%i==0) return i;

        }
        return 0;
    }
};