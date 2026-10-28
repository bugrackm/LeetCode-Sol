#include <string>
#include <stack>
using namespace std;

class Solution 
{
public:
    bool isValid(string s) 
    {
        int i;
        stack<char> st;
        
        if (s[0] == ')' || s[0] == ']' || s[0] == '}')
            return (false);
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                if (st.empty())
                    return (false);
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
                else if(s[i] == ']' && st.top() == '[')
                    st.pop();
                else if (s[i] == '}' && st.top() == '{')
                    st.pop();
                else 
                    return (false);
            }
        }
        if (!st.empty())
            return (false);
        return (true);
    }
};
