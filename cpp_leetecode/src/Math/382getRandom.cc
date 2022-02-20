#include<stdlib.h>
#include<vector>
using namespace std;

class Solution {
private:
    vector<int> list;
    class ListNode {
    public:
        int val;
        ListNode* next;
    };
public:
    Solution(ListNode* head) {
        while(head) {
            list.push_back(head->val);
            head = head->next;
        }

    }
    int getRandom();
};

int Solution::getRandom() {
    return list[(rand() % list.size())];
}