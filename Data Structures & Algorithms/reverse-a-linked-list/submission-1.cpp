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
        ListNode *ant = nullptr;
        ListNode *prox;
        while(head != nullptr){
            prox = head->next;
            head->next = ant;
            ant = head;
            head = prox;
        }
        return ant;
    }
};
