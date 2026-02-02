/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *collosionPT(ListNode *temp1, ListNode* temp2, int d){
        while(d > 0){
            d--;    
            temp2 = temp2->next;
        }
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2) return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1, *t2;
        t1 = headA; 
        t2 = headB;
        int n1 = 0, n2 = 0;
        while(t1 != NULL){
            n1++;
            t1 = t1->next;
        }
        while(t2 != NULL){
            n2++;
            t2 = t2->next;
        }
        ListNode *res;
        if(n1 == n2) res = collosionPT(headA, headB, n1-n2);
        if(n1 < n2) res = collosionPT(headA,headB,n2-n1);
        if(n2 < n1) res = collosionPT(headB,headA,n1-n2);
        return res;
    }
};