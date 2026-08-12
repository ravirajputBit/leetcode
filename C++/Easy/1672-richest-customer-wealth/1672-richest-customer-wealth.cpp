class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int sum = 0;
        for(int i=0; i<=acc.size()-1; i++){
            int a = 0;
            for(int j=0; j<acc[i].size(); j++){
            a += acc[i][j];
         }
         sum = max(sum, a);
        }
        return sum;
    }

}; 