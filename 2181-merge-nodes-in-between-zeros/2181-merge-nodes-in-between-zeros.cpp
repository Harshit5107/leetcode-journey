
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* temp=head;
        int sum=0;
        int count=0;
        ListNode* n=new ListNode(-1);
        ListNode* t=n;

        while(temp!=nullptr){

            if(temp->val==0 && count>=2){
                ListNode* k=new ListNode(sum);
                n->next=k;
                n=k;
                sum=0;
            }else{
                sum+=temp->val;
                count++;
            }
            
            temp=temp->next;
        }

        return t->next;
    }
};