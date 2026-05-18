class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        if(n == 1 && arr[0] == 0) return true;

        queue<int> q;
        vector<bool> v(n, false);
        q.push(start);
        v[start] = true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            if(arr[curr] == 0)
            return true;
            if(curr-arr[curr] >= 0 && !v[curr-arr[curr]]){
                q.push(curr-arr[curr]);
                v[curr-arr[curr]] = true;
            }
            if(curr+arr[curr] < n && !v[curr+arr[curr]]){
                q.push(curr+arr[curr]);
                v[curr+arr[curr]] = true;
            }
        }
        return false;
    }
};