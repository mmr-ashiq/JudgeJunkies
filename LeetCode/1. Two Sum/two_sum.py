class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i in range(len(nums)):
            key = target - nums[i]
            if key in hashmap:
                return [i, hashmap[key]]
            hashmap[nums[i]] = i

        return []

"""
Time Complexity: O(n)
Space Complexity: O(n)
"""