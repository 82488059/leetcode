#include <cstdio>
#include <iostream>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
#if 0
        int ll1{ Length(l1) }, ll2{ Length(l2) }, flag{0};
        ListNode* res{ nullptr }, *cur{nullptr};
        ListNode *big{ nullptr }, *small{nullptr};
        if (ll1 > ll2)
        {
            big = l1;
            small = l2;
            ll1 = ll2;
        }
        else
        {
            big = l2;
            small = l2;
        }
        while (big)
        {
            if (ll1>0)
            {
                --ll1;
                flag += big->val + small->val;
                big = big->next;
                small = small->next;
            }
            else
            {
                flag += big->val;
                big = big->next;
            }
            if (res)
            {
                cur ->next = new ListNode{ flag % 10 };
                flag = flag / 10;
                cur = cur->next;
            }
            else
            {
                cur = res = new ListNode{flag%10};
                flag = flag / 10;
            }
        }
        if (flag > 0)
        {
            cur->next = new ListNode{ flag % 10 };
        }
#else
        int flag{ 0 };
        ListNode * res{ nullptr }, * cur{ nullptr }; 
        // 
        flag = 0;
        while (l1 && l2)
        {
            flag += l1->val + l2->val;
            if (res)
            {
                cur->next = new ListNode{ flag % 10 };
                flag = flag / 10;
                cur = cur->next;
            }
            else
            {
                cur = res = new ListNode{ flag % 10 };
                flag = flag / 10;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            flag += l1->val;
            cur->next = new ListNode{ flag % 10 };
            flag = flag / 10;
            cur = cur->next;
            l1 = l1->next;
        }
        while (l2)
        {
            flag += l2->val;
            cur->next = new ListNode{ flag % 10 };
            flag = flag / 10;
            cur = cur->next;
            l2 = l2->next;
        }
        if (flag > 0)
        {
            cur->next = new ListNode{ flag };
        }
#endif 
        return res;
    }
    int Length(ListNode* l)
    {
        int n{ 0 };
        while (l)
        {
            l = l->next;
            ++n;
        }
        return n;
    }
};

int main()
{
    Solution s;

    ListNode a1{ 9 };
    ListNode a2{ 9, &a1 };
    ListNode a3{ 9, &a2 };
    ListNode a4{ 9, &a3 };

    ListNode b1{ 9 };
    ListNode b2{ 9, &b1 };
    ListNode b3{ 9, &b2 };
    
    auto ot = s.addTwoNumbers(&a4, &b3);
    auto it = ot;
    while (it)
    {
        std::cout << it->val << std::endl;
        it = it->next;
    }

    return 0;
}