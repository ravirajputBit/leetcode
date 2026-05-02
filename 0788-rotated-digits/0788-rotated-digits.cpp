class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        for(int i=1; i<=n; i++){
            int a = i;

            bool flag1 = true;
            bool flag2 = false;
            while(a > 0){
                int r = a%10;
                if(r == 3 || r == 4 || r == 7){
                    flag1 = false;
                    break;
                }    
                if(r == 2 || r == 5 || r == 6 || r == 9){
                    flag2 = true;
                }
                a /= 10;
            }
            if(flag1 && flag2) count++;
        }
        return count;
    }
};