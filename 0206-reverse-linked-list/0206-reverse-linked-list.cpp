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

ListNode* fun(ListNode* node , ListNode*prev){
    if( node==NULL)return prev;
    ListNode*  n = node->next;
    node->next = prev;
    prev = node;
  return  node = fun(n, prev); 
}
    ListNode* reverseList(ListNode* head) {
        return fun(head,NULL);
    }
};