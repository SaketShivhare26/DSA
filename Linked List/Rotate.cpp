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
    
    // Step1: Length og Linked List
    int getlength(ListNode* head){
        int cnt=0;
        ListNode * temp = head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
         
        int n = getlength(head);
        
        if(head==NULL || head->next==NULL || k==0 || k%n==0)
            return head;
        
        k = k%n;
        
        ListNode *curr=head;
        ListNode *prev=NULL;
        //Step 2:traversing till n-k times
        int t=n-k;
        while(t--){
            prev=curr;
            curr=curr->next;
            
        }
        //Step3: 
        prev->next=NULL;
        
        ListNode *tail=curr;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        
        tail->next=head;
        return curr;
    }
};
