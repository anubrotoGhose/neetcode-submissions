#include <unordered_map>;
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> numsCountMap;
        for(int i=0;i<nums.size();i++){
            if(numsCountMap.contains(nums[i])) {
                return true;
            } else {
                numsCountMap[nums[i]] = 1;
            }
        }
        return false;
    }
};