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
ListNode* reverse(ListNode* head,ListNode* prev){
    if( head==NULL)return prev;
    ListNode* n = head->next;
    head->next =prev;
    prev = head;
   head = reverse(n,prev);
   return  head;
}
    int pairSum(ListNode* head) {
        ListNode* s =head;
        ListNode* f =head;
        ListNode* temp =head;
        while(f->next->next !=NULL){
            f = f->next->next;
            s= s->next;
        }
        s->next = reverse(s->next,NULL);
        s= s->next;
        int ans =0;
        while(s != NULL){
            ans = max( ans , temp->val + s->val);
            s= s->next;
            temp = temp->next;
        }
        return ans;

    }
};