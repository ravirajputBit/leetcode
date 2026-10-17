class Solution {
public:
    int sum(int a){
        int s = 0;
        while(a){
            s += a%10;
            a /= 10;
        }
        return s;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> t = nums;
        sort(t.begin(), t.end(), [&](auto a, auto b){
            int s1 = sum(a);
            int s2 = sum(b);
            if(s1 != s2) return s1 < s2;
            return a < b;
        });

        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]] = i;
        }

        vector<bool> vis(n, false);
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(vis[i] || t[i] == nums[i]) continue;

            int cs = 0;
            int j = i;
            while(!vis[j]){
                vis[j] = true;
                j = mp[t[j]];
                cs++;
            }
            if(cs > 1) cnt += cs-1;
        }

        return cnt;
    }
};