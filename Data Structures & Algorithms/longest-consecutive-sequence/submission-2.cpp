class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int res = 0;
        for(int i=0;i<nums.size();i++) {
            st.insert(nums[i]);
        }

        for(int i=0;i<nums.size();i++) {
            int val = nums[i];
            if(st.find(val) != st.end() && st.find(val - 1) == st.end()) {
                int curr = val, cnt = 0;
                while(st.find(curr)!=st.end()) {
                    st.erase(curr);
                    curr++;
                    cnt++;
                }

                res = max(res, cnt);
            }
        }

        return res;
    }
};
