class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        targets = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in targets:
                return [targets[diff],i]
            targets[nums[i]] = i
        