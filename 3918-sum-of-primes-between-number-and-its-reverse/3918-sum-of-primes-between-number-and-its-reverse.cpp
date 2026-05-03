class Solution {
public:
    int isPrime(int m){
        if(m < 2) return 0;
        int j = 2;
        while(j < m){
            if(m%j == 0)
            return 0;
            j++;
        }
        return m;
    }
    int sumOfPrimesInRange(int n) {
        int a = n, rev = 0;
        while(a){
            int r = a%10;
            rev = rev*10+r;
            a /= 10;
        }
        int x, y;
        if(n < rev){
            x = n;
            y = rev;
        }else{
            y = n;
            x = rev;
        }

        int sum = 0;
        for(int i=x; i<=y; i++){
            sum += isPrime(i);
        }
        return sum;
    }
};