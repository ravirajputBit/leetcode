class Solution {
public:
    bool canConstruct(string rn, string mg) {
        int n = rn.size();
        int m = mg.size();

        if(n > m) return false;
        sort(rn.begin(), rn.end());
        sort(mg.begin(), mg.end());

        int i = 0;
        int j = 0;
        while(i<n && j<m){
            if(rn[i] == mg[j]) i++, j++;
            else j++;
        }

        return i == n ? true : false;
    }
};