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
        if (head== NULL || head->next==NULL || k == 0) return head; 

        ListNode* tmp = head;
        int n = 1;
        while (tmp->next !=NULL) 
        {
            tmp = tmp->next;
            n++;
        }
        tmp->next = head;
        k %= n;
        ListNode* newTail = head;
        for (int i = 1; i < n - k; i++) 
        {
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};

