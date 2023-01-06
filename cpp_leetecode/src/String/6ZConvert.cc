#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        string convert(string s, int row) {
            int n = s.size();
            int num = 2 * row - 2;
            if(row == 1 || n < 3) {
                return s;
            }

            vector<vector<char>> ans(n, vector<char>());
            for(int i = 0; i < n; i++) {
                int r;
                if( i % num < row)  r = i % num;
                else {
                    r = num - i % num;
                }

                ans[r].push_back(s[i]);
            }
            string anw(n, ' ');
            int count = 0;
            for(auto vec: ans) {
                for(auto ch: vec) {
                    anw[count] = ch;
                    count++;
                }
            }

            return anw;
        }
};
