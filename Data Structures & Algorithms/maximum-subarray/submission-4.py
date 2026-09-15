class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        result = nums[0]

        max_ending = nums[0]

        for i in range(1, len(nums)):
            max_ending = max(nums[i], nums[i]+max_ending)

            result = max(max_ending, result)
        
        return result