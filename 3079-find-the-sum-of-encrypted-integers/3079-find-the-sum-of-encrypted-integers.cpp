class Solution {
public:
    int encrypt(int n){
        if(n>1 && n<10) return n;

        int a = n, x = INT_MIN;
        int count = 0;
        while(a){
            x = max(x, a%10);
            a /= 10;
            count++;
        }
        int m = 0;
        while(count){
            m = m*10+x;
            count--;
        }
        return m;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += encrypt(nums[i]);
        }
        return sum;
    }
};