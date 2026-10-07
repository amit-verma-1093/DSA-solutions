class Solution {
public:
    vector<string> ans;
    string s;
    void helper(int open,int close,int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            helper(open+1,close,n);
            s.pop_back();
        }
        if(open>close){
            s.push_back(')');
            helper(open,close+1,n);
            s.pop_back();
        }

    }

    
    vector<string> generateParenthesis(int n) {
      
        helper(0,0,n);
        return ans;
    }
};