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
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        ListNode* cur = head;
        
        while(cur) {
            nums.push_back(cur->val);
            cur = cur->next;
        }
        int n = nums.size();
        for(int i = 0; i < n/2; i++) {
            if(nums[i] != nums[n-i-1]) return false;
        }
        return true;
    }
};

// BETTER APPROACH WITH O(1) Space Complexity
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow)
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev;
        while (slow)
            if (fast->val != slow->val) return false;
            else fast = fast->next, slow = slow->next;
        return true;
    }
};
