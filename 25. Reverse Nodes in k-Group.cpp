/*
Runtime: 16ms
Memory: 11.5MB
*/
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        for(int i=0;i<k;i++){
            if(temp==NULL)  return head;
            temp=temp->next;
        }
        
        // reverse the first k nodes
        ListNode *prev=NULL, *ptr=NULL;
        ListNode *curr=head;
        int count=0;
        while(curr!=NULL && count<k){
            ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ptr;
            count++;
        }
        
        if(ptr!=NULL)   head->next=reverseKGroup(ptr,k);
        
        return prev;
    }
};
