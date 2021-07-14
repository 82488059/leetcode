#include <vector>
#include <map>
#include <iostream>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> submaps;
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
                return {it->second, i};
            }
        }
        throw ("not find");
    }
};


int main()
{
    Solution a;
    vector<int> vv{ 1,2,3,4,5,6,7,8,9 };

    auto r = a.twoSum(vv, 10);

    cout << r[0] << r[1] << endl;

    return 0;
}