/*****
 *  
 *  KeyPoint: 
 *      analog real add
 *
 *      carry
 *
 *      reserve ans dummy Pointer
 *
 *****/ 
#include <iostream>

class ListNode;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(): val(0), next(nullptr) {}

    ListNode(int val): val(val), next(nullptr) {}

    ListNode(int val, ListNode* next): val(val), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = new ListNode();
    ListNode* ans = result;
    int carry = 0, total = 0;

    while(l1 != nullptr || l2 != nullptr || carry != 0) {
        total = carry;

        if(l1) {
            total += l1->val;
            l1 = l1->next;
        }

        if(l2) {
            total += l2->val;
            l2 = l2->next;
        }

        int num = total % 10;
        carry = total / 10;
        result->next = new ListNode(num);
        result = result->next;
    }

    return ans->next;
}

void printNum(ListNode* ans) {
    while(ans != nullptr) {
        std::cout << ans->val << std::endl;
        ans = ans->next;
    }
}

int main() {
    ListNode* l1 = new ListNode(7);
    l1->next = new ListNode(9);

    ListNode* l2 = new ListNode(9);
    l2->next = new ListNode(1);

    ListNode* result = addTwoNumbers(l1, l2);
    std::cout << "L1: "; printNum(l1);
    std::cout << "L2: "; printNum(l2);
    std::cout << "Result: ";   printNum(result);
    return 0;
}
