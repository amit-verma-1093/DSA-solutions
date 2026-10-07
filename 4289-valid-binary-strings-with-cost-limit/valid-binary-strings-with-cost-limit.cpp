class Solution {
public:
    vector<string> ans;
    string s;
    
    void helper(int i,int n,int k,bool t){
        if(i==n){
            if(k>=0)
                ans.push_back(s);
            return ;
        }
        if(k<0) return ;
        if(s.empty() || s.back()!='1'){
            s.push_back('1');
            helper(i+1,n,k-i,false);
            s.pop_back();

        } 
        
        s.push_back('0');

        helper(i+1,n,k,true);
        s.pop_back(); 
        
    }
    vector<string> generateValidStrings(int n, int k) {
        helper(0,n,k,true);
        
        return ans;
    }
};