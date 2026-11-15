class Solution {
    const int m = 1e9+7;
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long evn = 1, odd = 0;
        int cnt = 0, prty = 0;
        for(int x : arr){
            prty ^= (x & 1);
            if(prty == 1){
                cnt = (cnt+evn)%m;
                odd++;
            }
            else{
                cnt = (cnt+odd)%m;
                evn++;
            }
        }
        return cnt;
    }
};