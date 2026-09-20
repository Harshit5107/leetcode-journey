
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        
        stack<int> st;
        ListNode* temp=head;

        while(temp!=nullptr){
            
            while(!st.empty() && st.top()<temp->val){
                st.pop();
            }
            st.push(temp->val);
            temp=temp->next;
        }

        ListNode* n=new ListNode(-1);
        ListNode* ansnode=n;
        vector<int> t;

        while(!st.empty()){
            t.push_back(st.top());
            st.pop();
        }

        for(int i=t.size()-1;i>=0;i--){
            ListNode* newnode=new ListNode(t[i]);
            n->next=newnode;
            n=newnode;
        }

        return ansnode->next;
    }
};