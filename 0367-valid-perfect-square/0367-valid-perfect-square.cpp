class Solution {
public:
    bool isPerfectSquare(int n) {
        int st = 1;
        int end = n;
        while(st <= end){
            int mid = st+(end-st)/2;
            long long sqr = (long long) mid*mid;
            
            if(sqr > n)
                end = mid-1;
            else if(sqr < n)
                st = mid+1;
            else
                return true;
        }
        return false;
    }
};