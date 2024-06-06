/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         if (head == NULL) return NULL;
        map<int, int> valueCount;
        ListNode* temp = head;
        while (temp != NULL) {
            valueCount[temp->val]++;
            temp = temp->next;
        }
        ListNode dummy;
        ListNode* current = &dummy;
        temp = head;
        while (temp != NULL) {
            if (valueCount[temp->val] == 1) {
                current->next = new ListNode(temp->val);
                current = current->next;
            }
            temp = temp->next;
        }
        return dummy.next;
    }
};