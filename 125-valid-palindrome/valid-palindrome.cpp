class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
        for (int i: s){
            if(('a'<=i && i<='z') || ('A'<=i && i<='Z') || ('0'<=i && i<='9'))
                p+= tolower(i);
        }
        int l=0,r=p.size()-1;
        while(l<=r){
            if(p[l]!=p[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};