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
    void delete_node(ListNode **head, int n) {
        ListNode *first = *head;
        ListNode *second = *head;
        for (int i = 0; i < n; ++i) {
            if (second == nullptr) {
                return;
            }
            second = second->next;
        }
        if (second == nullptr) {
            ListNode *temp = *head;
            *head = (*head)->next;
            delete temp;
            return;
        }
        while (second->next != nullptr) {
            first = first->next;
            second = second->next;
        }
        ListNode *deleteNode = first->next;
        first->next = first->next->next;
        delete deleteNode;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) return nullptr;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        delete_node(&dummy->next, n);
        ListNode *result = dummy->next;
        delete dummy;
        return result;
    }
};
