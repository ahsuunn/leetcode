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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* lRes = new ListNode();
        ListNode* l = lRes;
        int res = 0;
        while(l1->next != nullptr && l2->next != nullptr){
            l->val = l1->val + l2->val + res;
            if (l->val > 9) {
                l->val %= 10;
                res = 1;
            } else {
                res = 0;
            }
            l->next = new ListNode();
            l = l->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        l->val = l1->val + l2->val + res;
        if (l->val > 9) {
            l->val %= 10;
            res = 1;
        } else {
            res = 0;
        }
        if (l1->next != nullptr) {
            l->next = l1->next;
        } else if (l2->next != nullptr) {
            l->next = l2->next;
        }
        while (l->next != nullptr) {
            l = l->next;
            l->val += res;
            if (l->val > 9) {
                l->val %= 10;
                res = 1;
            } else {
                res = 0;
            }
        }
        if (res) {
            l->next = new ListNode();
            l->next->val = 1;
        }
        return lRes;
    }
};
