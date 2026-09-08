from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        cnt = Counter(nums)
        values = list(cnt.values())
        values.sort(reverse=True)
        val_k = values[:k]
        result = []
        for i in cnt.keys():
            if cnt[i] in val_k:
                result.append(i)
        
        return result