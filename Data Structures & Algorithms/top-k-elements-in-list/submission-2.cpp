class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }

        vector<int> result;

        vector<vector<int>> buckets(nums.size() + 1);

        for(auto& pair: freq){
            int num = pair.first;
            int count = pair.second;
            buckets[count].push_back(num);
        }

        for(int i=nums.size(); i>=0 && result.size() < k; i--) {
            for(int num: buckets[i]) {
                result.push_back(num);

                if (result.size() == k) {
                    break;
                }
            }
        }

        return result;
    }
};
