class Solution {
public:
    bool check(int n){
        int x = 0;
        int a = n;
        if(n%10 == 0)
            return false;
            
        while(n > 0){
            x = n % 10;
            if (x == 0)
                return false;
            if (a%x != 0)
                return false;
            n = n/10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i=left; i<=right; i++) {
            if(check(i))
                ans.push_back(i);
        }
        return ans;
    }
};