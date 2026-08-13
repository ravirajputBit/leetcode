class Solution {
public:
    int numRescueBoats(vector<int>& ppl, int limit) {
        sort(ppl.begin(), ppl.end());
        int st = 0, end = ppl.size()-1;
        int cnt = 0;
        while(st <= end){
            if(ppl[st]+ppl[end] <= limit)
            st++;
            cnt++;
            end--;
        }
        return cnt;
    }
};