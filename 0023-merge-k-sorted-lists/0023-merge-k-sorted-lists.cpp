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

ListNode* merge(ListNode* l1  , ListNode* l2) {
    if( l1==NULL  )return  l2;
    if( l2==NULL  )return  l1;
    ListNode* t1 = l1;
    ListNode* t2 = l2;
    if( t1->val <= t2->val){
        t1->next  = merge(t1->next,t2);
        return t1;
    }
    else {
        t2->next = merge(t1,t2->next);
        return t2;
    }
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if( lists.size()==0)return NULL;
        ListNode*  ans = lists[0];
        for( int  i =1;i<lists.size();i++){
            if( lists[i] ==NULL)continue;
            ans = merge(ans, lists[i]);
        }
        return ans;
    }
};