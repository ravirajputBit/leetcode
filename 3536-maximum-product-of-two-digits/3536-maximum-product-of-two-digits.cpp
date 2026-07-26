class Solution {
public:
    int maxProduct(int n) {
        int fmx = n%10;
        n /= 10;
        int smx = n%10;
        if(smx > fmx) swap(smx, fmx);
        while(n > 0){
            n /= 10;
            int a = n%10;
            if(a > fmx){
                smx = fmx;
                fmx = a;
            }
            else if(a > smx)
            smx = a;
        }
        return fmx*smx;
    }
};