#include <vector>
#include <string>

using namespace std;

class Solution {
    public:
        string simplifyPath(string path) {
            path += "/";
            vector<char> folders;
            string folder = "";

            for(auto ch : path) {
                if(ch != '/') {
                    folder += ch;
                } else {
                    if(folder.size() == 0) {
                        
                    } else if(folder == "..") {
                        if(folders.size() != 0) {
                            folders.pop_back();
                        }
                    } else if(folder == ".") {
                            
                    } else {
                        folders.push_back(folder);
                    }
                }
                folder = "";
            }

            string ans = "";

            for(auto str: folders) {
                ans += "/";
                ans += str;
            }

            return ans;
        }
};
