class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<=100; i++){
            int m = i, pro = 1;
            while(m){
                pro *= m%10;
                m /= 10;
            }
            if(pro%t == 0) return i;
        }
        return -1;
    }
};