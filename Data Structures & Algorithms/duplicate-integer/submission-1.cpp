class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> dict;
        for(int i=0;i<nums.size();i++) {
            if(dict.count(nums[i]) > 0) {
                return true;
            }
            dict[nums[i]] = i;
        }

        return false;
    }
};