class Solution(object):
    def subArrayRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        total = 0
        for i in range(len(nums)):

            maxi = nums[i]
            mini = nums[i]

            for j in range(i , len(nums)):
                maxi = max(maxi , nums[j])
                mini = min (mini , nums[j])


                total += maxi - mini

        return total

        