class Solution(object):
    def digitSum(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        while len(s) > k:
            s2 = ""
            for i in range(0, len(s), k):
                a = 0
                for ch in s[i : i+k]:
                    a += int(ch)
                s2 += str(a)
            s = s2
        return s