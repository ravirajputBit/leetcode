class Solution {
public:
    long long sumAndMultiply(int n) {

        int a = 0, sum = 0, i = 1;
        while(n > 0){
            int r = n%10;
            if(r > 0){
                sum += r;
                a += r*i;
                i *= 10;
            }
            n /= 10;
        }

        return (long long) sum*a;
    }
};