#include <string>
#include <vector>
#include <stack>
#include <stdlib.h>
using namespace std;
class Solution 
{
public:
    int calPoints(vector<string>& operations) 
    {
        int i, sum;
        stack<int> s;

        i = 0;
        while (i < operations.size())
        {
            if (operations[i] == "D")
            {
                s.push(s.top() * 2);
            }else if (operations[i] == "C")
            {
                s.pop();
            }else if (operations[i] == "+")
            {
                int temp = s.top(), temp2;
                s.pop();
                temp2 = s.top();
                s.push(temp);
                s.push(temp2 + temp);
            }else
            {
                s.push(stoi(operations[i]));
            }
            i++;
        }
        sum = 0;
        while (!s.empty())
        {
            sum = sum + s.top();
            s.pop();
        }
        return (sum);
    }
};
