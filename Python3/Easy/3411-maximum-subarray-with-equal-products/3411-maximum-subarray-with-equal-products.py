class Solution:
    def maxLength(self, nums: List[int]) -> int:
        res = 0
        for i in range(len(nums)):
            Pro = nums[i]
            Gcd = nums[i]
            Lcm = nums[i]
            
            for j in range(i+1, len(nums)):
                Pro = Pro * nums[j]
                Gcd = gcd(Gcd, nums[j])
                Lcm = lcm(Lcm, nums[j])

                if Pro > Lcm*Gcd: break
                if Pro == Lcm*Gcd:
                    res = max(res, j-i+1)

        return res