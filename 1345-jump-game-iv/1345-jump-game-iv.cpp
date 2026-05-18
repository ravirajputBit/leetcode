class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> mp;
        for(int i=0; i<n; i++)
        mp[arr[i]].push_back(i);

        queue<int> q;
        vector<bool> v(n, false);
        q.push(0);
        v[0] = true;

        int ans = 0;
        while(!q.empty()){
            int s = q.size();

            while(s--){
                int curr = q.front();
                q.pop();
                if(curr == n-1) return ans;

                if(curr-1>=0 && !v[curr-1]){
                    v[curr-1] = true;
                    q.push(curr-1);
                }
                if(curr+1<n && !v[curr+1]){
                    v[curr+1] = true;
                    q.push(curr+1);
                }
                for(int a : mp[arr[curr]]){
                    if(!v[a]){
                        v[a] = true;
                        q.push(a);
                    }
                }
                mp[arr[curr]].clear();
            }
            ans++;
        }
        return ans;
    }
};