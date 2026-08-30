class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;
        for(int i=0;i<nums.size();i++) {
            numsMap[nums[i]] = i;
        }

        for(int i=0;i<nums.size();i++) {
            int desired = target - nums[i];

            if(numsMap.count(desired)>0) {
                if(numsMap[desired]!=i)
                return {i, numsMap[desired]};
            }
        }
    }
};
