class Solution {
public:
    char findTheDifference(string s, string t) {
        
        for(int i:s){
            t+=i;
        }
        int ans=0;
        for(int i:t){
            ans^=i;
        }
        return (char)ans;
    }
};