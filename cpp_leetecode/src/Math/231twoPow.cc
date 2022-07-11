#include <iostream>

using namespace std;

class Solution {
    public:
        bool isPow(int n) {
            return n > 0 && ((n & (n - 1)) == 0);
        }
};

int main() {
    Solution s;
    if(s.isPow(1024)) {
        cout << "Accepted!"<< endl;
    }
}
