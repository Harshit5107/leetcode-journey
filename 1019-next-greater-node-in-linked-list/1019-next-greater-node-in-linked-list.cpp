
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;

        ListNode* temp=head;

        while(temp!=nullptr){

            ListNode* curr=temp;
            int data=curr->val;
            bool f=false;

            while(curr!=nullptr){
                if(data<curr->val){
                    ans.push_back(curr->val);
                    f=true;
                    break;
                }
                curr=curr->next;
            }

            if(f==false){
                ans.push_back(0);
            }

            temp=temp->next;

        }

        return ans;
    }
};