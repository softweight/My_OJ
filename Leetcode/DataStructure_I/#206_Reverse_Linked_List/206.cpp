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
    ListNode* reverseList(ListNode* head) {
        ListNode* subhead, *newhead, *r = new ListNode();
        newhead = r;
        subhead = head;
        while(subhead){
            if(subhead->next != NULL && subhead->next->next == NULL){
                r->next = subhead->next;
                subhead->next = NULL;
                r = r->next;
                subhead = head;
            }else{
                subhead = subhead->next;
            }
        }
        r->next = head;
        return newhead->next;
    }
};


// reference from : http://alrightchiu.github.io/SecondRound/linked-list-xin-zeng-zi-liao-shan-chu-zi-liao-fan-zhuan.html
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL , *curr=head, *nextt;
        while (curr != NULL){
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        head = prev;
        return head;
    }
};
