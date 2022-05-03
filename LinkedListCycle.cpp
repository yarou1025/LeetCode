class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> tmp;
        ListNode* nptr = head;
        while(nptr!=NULL){
            if(tmp.find(nptr) != tmp.end()) return true;
            tmp.insert(nptr);
            nptr = nptr->next;
            
        }
        return false;
    }
};
