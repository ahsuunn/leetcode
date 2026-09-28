class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        out = sorted(nums)

        return out[len(nums) - k]
