#pragma once
#include <string>
#include <memory.h>

class SolutionLengthOfLongestSubstring {
public:
    int lengthOfLongestSubstring(std::string s) {
        int begin{ 0 }, end{ 0 }, length{ 0 }, result{ 0 };
        int size{ int(s.size()) };
        // 无重复字符的最长子串，可见字符最长不会超过128个
        int use[128]{-1};  // 标记字符开始出现的位置
        memset(use, -1, sizeof(use));
        while (end < size)
        {
            char ch = s[end]; // 当前字符
            if (use[int(ch)] >= begin) // 当前字符已经在子串中出现
            {
                begin = use[int(ch)] + 1; // 修改当前子串的起点为上一次出现当前字符的后1位
                length = end - begin + 1; // 计算当前子串的长度。
                use[int(ch)] = end; // 修改当前字符在字串中的位置
                ++end;
            }
            else
            {
                use[int(ch)] = end; // 标记当前字符在字串中的位置
                ++end; // 
                ++length; // 长度+1
            }
            // 判断最长
            if (result < length)
            {
                result = length;
            }
        }
        return result;
    }
};