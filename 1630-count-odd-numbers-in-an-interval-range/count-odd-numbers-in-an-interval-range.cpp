class Solution {
public:
    int countOdds(int low, int high) {
        int c=0;
        for(int i=low;i<high+1;i++){
            if(i%2){
                c++;
            }
        }
        return c;
    }
};