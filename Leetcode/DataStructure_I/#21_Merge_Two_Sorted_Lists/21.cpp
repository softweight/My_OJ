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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(!list1)return list2;
        if(!list2)return list1;

        ListNode* ans, *last = new ListNode(0);
        ans = last;

        while(list1 && list2){
            if(list1->val <= list2->val){
                last->next = list1;
                list1 = list1->next;
                last = last->next;
            }else{
                last->next = list2;
                list2 = list2->next;
                last = last->next;
            }
        }

        if(list1) last->next = list1;
        else last->next = list2;

        return ans->next;

    }
};