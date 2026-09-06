class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int leftProd = 1;
        for(int i=0;i<nums.size();i++) {
            output[i] = leftProd;
            leftProd *= nums[i];
        }

        int rightProd = 1;
        for(int i=nums.size()-1;i>=0;i--){
            output[i] = output[i]*rightProd;
            rightProd*=nums[i];
        }

        return output;
    }
};
