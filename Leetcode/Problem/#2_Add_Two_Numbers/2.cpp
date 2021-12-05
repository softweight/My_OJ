#include <iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode *head = new ListNode();
            ListNode *ptr = head;
            int carry=0;
            while(l1!=NULL || l2!=NULL || carry){
                int sum=0;
                
                if(l1!=NULL){
                    sum = sum + l1->val;
                    l1 = l1->next;
                }
                
                if(l2!=NULL){
                    sum = sum + l2->val;
                    l2 = l2->next;
                }
                
                sum = sum + carry;
                carry = sum/10;
                
                ListNode *node = new ListNode(sum%10);
                ptr->next = node;
                ptr = ptr->next;
                
            }
            return head->next;
        }
};