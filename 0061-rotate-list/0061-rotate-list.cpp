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
 //#include<iostream>
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if( head == NULL ||  head->next == NULL ) return head;
        ListNode* temp =head;
        vector<int> vec;
        while( temp != NULL){
            vec.push_back( temp->val);
            temp =temp->next;
        }
        int n = vec.size();
        k = k%n;
        reverse( vec.begin(),vec.end());
        reverse( vec.begin(), vec.begin()+k);
        reverse( vec.begin()+k, vec.end());
        temp = head;
        int i=0;
        
        while( temp != NULL ){
            temp->val = vec[i];
            temp =temp->next;
            i++; 
        }
    return head;
    }
};