#include <queue>
#include <string>
#include <array>
using namespace std;

class Solution 
{
public:
    int firstUniqChar(string s) 
    {
        int i;
        queue<char> q;
        array<int, 26> frequency = {0};
 
        i = 0;
        while (s[i] != '\0')
        {
            q.push(s[i]);
            frequency[s[i] - 'a']++;
            i++;
        }

        i = 0;
        while (!q.empty())
        {
            if (frequency[q.front() - 'a'] == 1)
            {
                return (i);
            }
            else
            {
                q.pop();
                i++;
            }
        }
        return (-1);
    }
};
