class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> vec;
        ListNode* n=new ListNode(-1);
        ListNode* ans=n;

        for (int i = 0; i < lists.size(); i++)
        {
            ListNode* temp=lists[i];

            while (temp!=nullptr)
            {
                vec.push_back(temp->val);
                temp=temp->next;
            }
            
        }

        sort(vec.begin(),vec.end());

        for (int i = 0; i < vec.size(); i++)
        {
            ListNode* t=new ListNode(vec[i]);
            n->next=t;
            n=n->next;
        }
        
        return ans->next;
    }
};
