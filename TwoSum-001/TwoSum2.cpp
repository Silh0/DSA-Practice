//#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numberMap;
        int neededValue = 0;

        for (int i = 0; i < nums.size(); i++) {
            neededValue = target - nums[i];
            unordered_map<int, int>::iterator it = numberMap.find(neededValue);
            if (numberMap.find(neededValue) != numberMap.end())
                return {i, it->second};
            else
                numberMap.insert({nums[i], i});
        }
        return {};
    }
};

/*
hashmap implementation
- make hashmap
- start iterating through arr
- find value needed to reach target from current value
- check if value needed exists in hashmap
- move on
*/