#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next){
            return false;
        }
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast && slow){
            fast = fast->next;
            if(fast){
                fast = fast->next;
                slow = slow->next;
            }
            if(fast==slow){
                return true;
            }
        }
        return false;
        }
};