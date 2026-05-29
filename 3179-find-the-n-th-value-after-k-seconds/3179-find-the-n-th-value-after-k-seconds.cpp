class Solution {
    long long m = 1e9 + 7;
public:
    int valueAfterKSeconds(int n, int k) {
        vector<long long> v(n, 1);
        for(int i=0; i<k; i++){
            int sum = 0;
            for(int j=1; j<n; j++){
                v[j] += v[j-1];
                v[j] %= m;
            }
        }
        return v[n-1];
    }
};