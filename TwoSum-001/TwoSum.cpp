class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int trial;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                trial = nums[i] + nums[j];
                    if (trial == target){
                        return {i, j};
                    }
            }
        }
        return {};
    }
};

/*
trial int = 0
add other members sequentially
if == target, return
if !=, move on
if none match, iterate trial int++

trial = nums[i];
            int add == trialIndex + 1;

10 Sep 2024
*/
