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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map <int,int> m;
        for(auto it:nums)
        {
            m[it]++;
        }
        ListNode *x= new ListNode(3);
        ListNode *y=x;
        ListNode *temp= head;
        while(temp!=NULL)
        {
            if(!m[temp->val]) {x->next=temp; x=x->next;}
            temp=temp->next;
        }
        x->next=NULL;
        return y->next;
    }
};