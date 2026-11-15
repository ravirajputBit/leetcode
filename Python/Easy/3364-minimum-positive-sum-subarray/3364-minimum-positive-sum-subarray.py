class Solution(object):
    def minimumSumSubarray(self, nums, l, r):
        """
        :type nums: List[int]
        :type l: int
        :type r: int
        :rtype: int
        """
        mn = float("inf")
        for i in range(l, r+1):
            sum = 0
            for j in range(0, i):
                sum += nums[j]
            if(sum > 0):
                mn = min(mn, sum)
            for k in range(i, len(nums)):
                sum += nums[k]
                sum -= nums[k-i]
                if(sum > 0):
                    mn = min(mn, sum)
        if(mn == float("inf")):
            return -1
        else:
            return mn
        