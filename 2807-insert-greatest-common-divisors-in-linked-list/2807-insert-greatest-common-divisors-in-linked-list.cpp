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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr) return head;
        ListNode* temp=head;

        while(head!=nullptr && head->next!=nullptr){
            int n=head->val;
            ListNode* nextone=head->next;
            int m=head->next->val;
            int g=gcd(n,m);

            ListNode* newnode=new ListNode(g);
            head->next=newnode;
            newnode->next=nextone;
            head=head->next->next;
        }

        return temp;
    }
};