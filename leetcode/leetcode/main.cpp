#include "addTwoNumbers.h"
#include "twoSum.h"
#include "lengthOfLongestSubstring.h"
#include "findMedianSortedArrays.h"

#include "main.h"

#include <iostream>

#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int findMedianSortedArrays()
{
    return 0;
}


int main()
{
    //addTwoNumbers();
    //twoSum();
    //LengthOfLongestSubstring();
    findMedianSortedArrays();

    return 0;
}

int LengthOfLongestSubstring()
{
    SolutionLengthOfLongestSubstring s;
    //std::string st{ "hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" };
    std::string st{ " " };
    int n = s.lengthOfLongestSubstring(st);
    std::cout << n << std::endl;
    return 0;
}

int addTwoNumbers()
{
    SolutionAddTwoNumbers s;

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

int twoSum()
{
    SolutionTwoSum a;
    std::vector<int> vv{ 1,2,3,4,5,6,7,8,9 };
    auto r = a.twoSum(vv, 10);
    std::cout << r[0] << r[1] << std::endl;
    return 0;
}
