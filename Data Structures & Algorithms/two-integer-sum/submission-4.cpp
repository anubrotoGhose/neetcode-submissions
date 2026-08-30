class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;

        for (int i = 0; i < nums.size(); i++) { 
            int desired = target - nums[i]; 
            if (m.count(desired) > 0) { 
                return {m[desired], i}; 
            } 
            m[nums[i]] = i; 
        }

        return {};
    }
};
