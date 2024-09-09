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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector <vector <int>> v(m, vector <int> (n,-1));
        int sr=0,sc=0,er=m-1,ec=n-1;
        ListNode* temp=head;
        while(head!=NULL&&sc<=ec&&sr<=er)
        {
            for(int j=sc;j<=ec;j++)
            {
                if(temp!=NULL) { v[sr][j]=temp->val; temp=temp->next;}
            }
            sr++;
            for(int i=sr;i<=er;i++)
            {
                if(temp!=NULL) { v[i][ec]=temp->val; temp=temp->next;}
            }
            ec--;
            for(int j=ec;j>=sc;j--)
            {
                if(temp!=NULL) { v[er][j]=temp->val; temp=temp->next;}
            }
            er--;
            for(int i=er;i>=sr;i--)
            {
                if(temp!=NULL) { v[i][sc]=temp->val; temp=temp->next;}
            }
            sc++;
        }
        return v;
    }
};