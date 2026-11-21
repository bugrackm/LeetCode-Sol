#include <iostream>
#include <stack>
using namespace std;

struct ListNode
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
    public:
        bool isPalindrome(ListNode* head) 
        {
            ListNode* slow = head, *fast = head;
            stack<int> nums;
            
            while (fast != nullptr && fast -> next != nullptr)
            {
                nums.push(slow -> val);
                slow = slow -> next;
                fast = fast -> next -> next;
            }

            if (fast != nullptr) // that means it's odd
            {
                slow = slow -> next;
            }
            
            while (slow != nullptr)
            {
                if (nums.top() == slow -> val)
                {
                    nums.pop();
                    slow = slow -> next;
                }else if (nums.top() != slow -> val)
                {
                    return (false);
                }
            }
            return (true);
        }
};
