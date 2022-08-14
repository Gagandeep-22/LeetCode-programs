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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
    
        ListNode* res = new ListNode;
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        ListNode* point = res;
        if(cur1->val < cur2->val) {
            res->val = cur1->val;
            res->next = nullptr;
            cur1=cur1->next;
        }
        else {
            res->val = cur2->val;
            res->next = nullptr;
            cur2 = cur2->next;
        }
        while(cur1 && cur2) {
            if(cur1->val < cur2->val) {
                ListNode* temp = new ListNode;
                point->next = temp;
                temp->val = cur1->val;
                temp->next = nullptr;
                cur1=cur1->next;
                point = point->next;
            }
            else {
                ListNode* temp = new ListNode;
                point->next = temp;
                temp->val = cur2->val;
                temp->next = nullptr;
                cur2=cur2->next;
                point = point->next;
            }
        }
        while(cur1) {
            ListNode* temp = new ListNode;
            point->next = temp;
            temp->val = cur1->val;
            temp->next = nullptr;
            cur1=cur1->next;
            point = point->next;
        }
        while(cur2) {
            ListNode* temp = new ListNode;
            point->next = temp;
            temp->val = cur2->val;
            temp->next = nullptr;
            cur2=cur2->next;
            point = point->next;
        }
        return res;
    }
};
