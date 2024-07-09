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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ios::sync_with_stdio(false); 
        int minDis = -1;
        int maxDis = -1;
        if(head->next->next == NULL){
            return {-1,-1};
        }
        ListNode* curr = head->next;
        ListNode* prev = head;

        int prePosition = -1, curPosition = -1;
        int firstPosition = -1, position = 0;
        while(curr->next != NULL){
            if((curr->val < prev->val && curr->val < curr->next->val) || 
               (curr->val > prev->val && curr->val > curr->next->val))
               {
                prePosition = curPosition;
                curPosition = position;
                if(firstPosition == -1) {
                    firstPosition = position;
                }
                if(prePosition != -1) {
                    if(minDis == -1) minDis = curPosition - prePosition;
                    else minDis = min(minDis, curPosition - prePosition);
                    maxDis  = position - firstPosition;
                }
            }
            position++;
            prev = curr;
            curr = curr -> next;
        }
        return {minDis, maxDis};

    }
};