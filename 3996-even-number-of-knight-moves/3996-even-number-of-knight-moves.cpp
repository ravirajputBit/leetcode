class Solution {
public:
    bool canReach(vector<int>& st, vector<int>& t) {
        return (st[0] + st[1] + t[0] + t[1]) % 2 == 0;
    }
};