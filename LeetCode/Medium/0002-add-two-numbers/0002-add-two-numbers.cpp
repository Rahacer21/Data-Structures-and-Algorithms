class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //what i am thinking to maker new dummy list of -1 and 
        ListNode* dummy=new ListNode(-1);
        ListNode* t=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int x=0,y=0;
            if(l1) {
                x=l1->val;
                l1=l1->next;
            }
            if(l2) {
                y=l2->val;
                l2=l2->next;
            }
            int sum=x+y+carry;
            ListNode* node=new ListNode(sum%10);
            carry=sum/10;
            t->next=node;
            t=t->next;
        }
        return dummy->next;
    }
};