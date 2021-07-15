#pragma once

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};

class SolutionAddTwoNumbers {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int flag{ 0 };
        ListNode* res{ nullptr }, * cur{ nullptr };
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
        return res;
    }
};

