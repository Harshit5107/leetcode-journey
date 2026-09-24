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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1,st2;

        while(l1!=nullptr){
            st1.push(l1->val);
            l1=l1->next;
        }

        while(l2!=nullptr){
            st2.push(l2->val);
            l2=l2->next;
        }
        stack<int> m;
        int carry=0;
        while(!st1.empty() && !st2.empty()){
            int sum=carry+st1.top()+st2.top();
            m.push(sum%10);
            carry=sum/10;
            st1.pop();
            st2.pop();
        }

        while(!st1.empty()){
            int sum=carry+st1.top();
            m.push(sum%10);
            carry=sum/10;
            st1.pop();
        }

        while(!st2.empty()){
            int sum=carry+st2.top();
            m.push(sum%10);
            carry=sum/10;
            st2.pop();
        }
        if(carry)
            m.push(carry);
        ListNode* ans=nullptr;
        ListNode* r=ans;

        while(!m.empty()){
            ListNode* temp3=new ListNode(m.top());
            m.pop();
            if(ans==nullptr){
                ans=temp3;
                r=ans;
            }else{
                ans->next=temp3;
                ans=temp3;
            }
        }

        return r;
    }
};