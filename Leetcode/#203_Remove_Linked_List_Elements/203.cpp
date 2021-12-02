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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* subhead = new ListNode();
        ListNode* temp  = subhead, *itr = head;

        while(itr){
            if(itr->val != val){
                temp->next = itr;
                temp = temp->next;
            }
            itr = itr->next;
        }
        temp->next = NULL;
        return subhead->next;
    }
};