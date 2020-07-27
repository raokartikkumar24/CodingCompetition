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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
        if(!head) return nullptr;
        if(head->next == nullptr) return nullptr;
        
        ListNode *tempNode = head;
        
        ListNode *p = head;
        ListNode *s = head;
        int pos = 1;
        while(pos != n) {
            s = s->next;
            pos++;
        }
        
        ListNode *prev = nullptr;
        while(s->next != nullptr) {
            s = s->next;
            prev = p;
            p = p->next;
        }
        
        ListNode *temp = p->next;
        if(!prev) return temp;
         
        prev->next = temp;
        
        return tempNode;
        
    }
};