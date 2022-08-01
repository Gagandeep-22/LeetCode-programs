/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Using hashSet
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> dp;
        if(head == NULL) 
            return NULL;
        ListNode* cur = head;
        while(cur) {
            if(dp.find(cur) != dp.end())
                return cur;
            dp.insert(cur);
            cur=cur->next;
        }
        return NULL;
    }
};

// Using Slow and Fast pointer (Floyd Algorithm)
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while(true){
            if(!fast || !fast->next)
                return NULL;
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                break;
        }
        slow = head;
        while(fast != slow){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};
