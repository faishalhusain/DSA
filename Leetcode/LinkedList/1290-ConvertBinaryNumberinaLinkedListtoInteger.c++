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
    int getDecimalValue(ListNode* head) {\
        ListNode* temp = head;
        string s = "";
        while(temp != NULL){
            s += to_string(temp->val);
            temp = temp->next;
        }
        int res = 0;
        for(char c : s){
            res = (res << 1) + (c - '0'); 
        }
        return res;
    }
};