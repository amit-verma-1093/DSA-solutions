class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int c = 0;

        vector<int> a(128, 0);

        for (int i = 0; i < n; i++) {
            while (a[(unsigned char)s[i]] > 0) {
                a[(unsigned char)s[l]]--;
                l++;
            }

            a[(unsigned char)s[i]]++;
            c = max(c, i - l + 1);
        }
        return c;
    }
};