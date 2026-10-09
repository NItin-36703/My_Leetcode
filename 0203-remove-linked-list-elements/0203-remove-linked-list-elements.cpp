
class Solution {
public:
    void Delete(ListNode* &head, ListNode* prev, ListNode* curr, int& val) {
        if (curr == NULL) return;

        if (curr->val == val) {
            prev->next = curr->next;
            Delete(head, prev, prev->next, val);
        }
        else {
            Delete(head, curr, curr->next, val);
        }
    }

    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            head = head->next;
        }

        if (head == NULL) return NULL;

        Delete(head, head, head->next, val);

        return head;
    }
};