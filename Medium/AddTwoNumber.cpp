//Simple Brute Force method

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,a;
        ListNode *ans=new ListNode();
        ans=NULL;
        ListNode *temp1=l1,*temp2=l2,*t;
        while(temp1!=NULL || temp2!=NULL){
            ListNode *temp = new ListNode();
            if(temp1==NULL){
                a = temp2->val;
                temp2=temp2->next;
            }
            else if(temp2==NULL){
                a = temp1->val;
                temp1=temp1->next;
            }
            else{
                a = temp1->val + temp2->val;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            a = a + carry;
            carry=0;
            if(a>9){
                temp->val = a%10;
                a=a/10;
                carry=a%10;
            }
            else{
                temp->val = a;
            }
            
            if(ans==NULL){
                ans=temp;
            }
            else{
                t=ans;
                while(t->next!=NULL){
                    t=t->next;
                }
                t->next=temp;
            }
        }
        if(carry!=0){
            ListNode *temp = new ListNode(carry);
            t=ans;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp;
        }
        return ans;
    }
};
