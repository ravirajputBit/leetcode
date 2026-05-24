class Solution {
public:
    int passwordStrength(string pass) {
        unordered_set<char> s(pass.begin(), pass.end());
        int res = 0;
        for (auto& x : s) {
            if (x >= 'a' && x <= 'z') res++;
            else if (x >= 'A' && x <= 'Z') res += 2;
            else if (x >= '0' && x <= '9') res += 3;
            else res += 5;
        }
        return res;
    }
};