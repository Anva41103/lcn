class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Step 1: Find the total length of the linked list
        int n = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }
        
        // Step 2: Determine the size of each part
        int baseSize = n / k;  // Minimum size of each part
        int extra = n % k;     // Number of parts that will have an extra node

        // Step 3: Split the list into parts
        vector<ListNode*> ans(k, nullptr);
        temp = head;
        for (int i = 0; i < k; i++) {
            ans[i] = temp;  // Assign the head of the current part
            int partSize = baseSize + (extra > 0 ? 1 : 0);  // Add an extra node to the first 'extra' parts
            extra--;

            // Move 'partSize - 1' steps forward in the list
            for (int j = 0; j < partSize - 1 && temp != nullptr; j++) {
                temp = temp->next;
            }

            // Break the current part from the rest of the list
            if (temp != nullptr) {
                ListNode* nextPart = temp->next;
                temp->next = nullptr;
                temp = nextPart;
            }
        }

        return ans;
    }
};
