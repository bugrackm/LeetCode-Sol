#include <stack>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    string makeGood(string s) 
    {
        stack<char> st;
        string res = "";
        int i;
        
        i = 0;
        while (i < s.size())
        {
            if (st.empty() || abs(s[i] - st.top()) < 32 || abs(s[i] - st.top()) > 32)
                st.push(s[i]);
            else
                st.pop();
            i++;
        }

        while (!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return (res);
    }
};
