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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode *oldHead = head;
        int counter = 0;
        int len = 0;
        while(oldHead != nullptr) {
            oldHead = oldHead->next;
            len++;
        }
        oldHead = head;
        ListNode *prev = nullptr;
        ListNode *traverse = head;
        int prevCounter = 0;
        while(true) {
            prev = traverse;
            traverse = traverse->next;
            prevCounter = counter;
            counter = (counter + 2)%len;
            if(counter == 0) {
                break;
            }
            counter = prevCounter+1;
        }
        
        if(traverse->next != nullptr) {
            traverse->next->next = head;
            prev->next = nullptr;
            head = traverse;
            return head;
        }
        else {
            traverse->next = head;
            prev->next = nullptr;
            head = traverse;
            return head;
        }
        
        
        
    }
};