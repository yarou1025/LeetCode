class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> ptr_set;
        while(head != NULL){
            if(ptr_set.find(head) != ptr_set.end()) return true;
            ptr_set.insert(head);
            head = head->next;
        }
        return false;
    }
};

Runtime: 29 ms, faster than 7.27% of C++ online submissions for Linked List Cycle.
Memory Usage: 11.2 MB, less than 5.94% of C++ online submissions for Linked List Cycle.
    
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode* ptr1 = head;   
        head = head->next;
        while(head != NULL and head->next != NULL ){
            if(ptr1 == head) return true;
            ptr1 = ptr1->next;
            head = head->next->next;
        }
        return false;
    }
};

Runtime: 16 ms, faster than 40.48% of C++ online submissions for Linked List Cycle.
Memory Usage: 8.1 MB, less than 14.57% of C++ online submissions for Linked List Cycle.
