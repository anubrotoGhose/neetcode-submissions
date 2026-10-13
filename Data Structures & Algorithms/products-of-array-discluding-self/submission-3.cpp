class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> rightArray (nums.size());
        vector<int> leftArray (nums.size());
        vector<int> outArray (nums.size());
        int rightProd = 1;
        for(int i=nums.size()-1;i>=0;i--) {
            
            rightArray[i] = rightProd;
            rightProd*=nums[i];

        }

        int leftProd = 1;
        for(int i=0;i<nums.size();i++) {

            leftArray[i] = leftProd;
            leftProd*=nums[i];

        }

        for(int i=0;i<nums.size();i++) {
            outArray[i] = leftArray[i]*rightArray[i];
        }

        return outArray;

    }   
};
