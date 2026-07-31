class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        bool ans=true;
 

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                vec.push_back(s[i]);

            }else{

                if (vec.empty())
                {
                    return false;
                }
                
                if ((s[i]==')' && vec.back()=='(') || (s[i]=='}' && vec.back()=='{') || (s[i]==']' && vec.back()=='['))
                {
                    vec.pop_back();
                }else{
                    return false;
                }
                
                
            }
            
        }

        
        return vec.empty();
    }
};
