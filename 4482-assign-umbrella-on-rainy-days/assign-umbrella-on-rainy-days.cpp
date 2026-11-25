class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string> ans;
        int a=0;
        int b=0;
        for (int i=0;i<n;i++){
            if(i==n-1){
                if(rain[i]==0){
                    ans.push_back("None");
                }
                else
                    ans.push_back("Bob");
            }
               
            else if((rain[i] == 1) && (rain[i + 1] == 1)){
                if(a<=b){
                ans.push_back("Alice");
                a++;}
                else {
                ans.push_back("Bob");
                b++;}}
            else if(rain[i] == 1){
                ans.push_back("Bob");
                b++;}
            else 
                ans.push_back("None");

        }
        return ans;
    }
};