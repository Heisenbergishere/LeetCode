class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if( head== NULL)return NULL;
        ListNode* s = head;
        ListNode* f = head;
        if(f->next &&  f->next->next==NULL)return f->next;
        while(f->next &&  f->next->next){
            s = s->next;
            f = f->next->next;
            if( f->next==NULL){
                return s;
            } 
            else if( f->next->next==NULL){
                return s->next;
            }
        }
        return head;
    }
};