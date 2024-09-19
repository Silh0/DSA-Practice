class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> numberMap;

        for (int i; i < nums.size(); i++) {
            //unordered_map<int, int>:: iterator it = find  
            //I realized that I don't need to return the value, just the boolean
            if (numberMap.find(nums[i]) != numberMap.end())
                return true;
            else 
                numberMap.insert({nums[i], i});
        }
        return false;
    }
};

/*
- create hashmap
- start iterating through arrray nums
- check if value already exists in map
- if not, add value to map
- move on
*/