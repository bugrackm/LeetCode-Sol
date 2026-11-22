#include <stack>
#include <vector>
using namespace std;

class Solution 
{
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
        {
            stack<int> st;
            vector<int> nextGreater(10001,-1);

            st.push(nums2[0]);
            for (int i = 1; i < nums2.size(); i++)
            {
                while (nums2[i] > st.top())
                {

                    st.pop();
                    st.push(nums2[i]);
                }
            }
            
            return (nextGreater);
        }
};
