class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        for(int i : nums){
            while(i){
                int n = i%10;
                i /= 10;
                if(n == digit) ans++;
            }
        }
        return ans;
    }
};