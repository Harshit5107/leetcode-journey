
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> kano;

        for (int i = 0; i < s.length(); i++)
        {
            if (!kano.empty() &&(s[i]==']' && kano.top()=='[' || s[i]==')' && kano.top()=='(' || s[i]=='}' && kano.top()=='{'))
            {
                kano.pop();
            }

            else if (!kano.empty() &&(s[i]==']' && kano.top()!='[' || s[i]==')' && kano.top()!='(' || s[i]=='}' && kano.top()!='{'))
            {
                return false;
            }
            else{
                kano.push(s[i]);
            }
            
        }
        
        return kano.empty();
    }
};