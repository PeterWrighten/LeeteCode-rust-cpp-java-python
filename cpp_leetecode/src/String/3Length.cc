#include<unordered_set>
#include<string>
using namespace std;

class Solution {
public:
    int lengthofLongestSubstring(string s) {
        unordered_set<char> st;
        int n = s.size();
        int rk = -1, ans = 0;
        for(int i = 0; i < n; i++) {
            if(i != 0) {
                st.erase(s[i-1]);
            }
            while(rk+1 < n && !st.count(s[rk+1])) {
                st.insert(s[rk+1]);
                rk++;
            }
            ans = max(ans, rk - i + 1);
        }
        return ans;
    }
};