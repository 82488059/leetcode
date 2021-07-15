#pragma once

#include <vector>
#include <map>

class SolutionTwoSum {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> submaps;
        int size = nums.size();
        auto itEnd = submaps.end();
        for (int i = 0; i < size; ++i)
        {
            auto it = submaps.find(nums[i]);
            if (itEnd == it)
            {
                submaps.insert(std::make_pair(target - nums[i], i));
            }
            else
            {
                return { it->second, i };
            }
        }
        throw ("not find");
    }
};
