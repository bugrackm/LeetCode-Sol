#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    string removeDuplicates(string s) 
    {
        stack<char> st;
        string res = "";
        int i;

        i = 0;
        while (i < s.size())
        {
            if (st.empty() || s[i] != st.top())
                st.push(s[i]);
            else
                st.pop();
            i++;
        }
        
        i = 0;
        while (!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());

        return (res);
    }
};
