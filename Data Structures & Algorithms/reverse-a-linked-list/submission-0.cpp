/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        ListNode* temp=head;
        ListNode* forward=head;
        ListNode* prev=nullptr;
        while(temp){
            forward=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forward;
        }
        return prev;
    }
};
