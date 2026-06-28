class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mx = 1;
        for(int i=1; i<arr.size(); i++){
            if(mx+1 <= arr[i])
                mx++;
        }
        return mx;
    }
};