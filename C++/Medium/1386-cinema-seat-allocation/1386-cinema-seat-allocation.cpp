class Solution {
public:
    int maxNumberOfFamilies(int n,vector<vector<int>>& rs){
        sort(rs.begin(),rs.end(),[](const auto &a,const auto &b){
            if(a[0] != b[0]) return a[0] < b[0];
            return a[1] < b[1];
        });

        int ans = 0;
        int i = 0;
        while(i < rs.size()){
            int row = rs[i][0];
            bool a = true;
            bool b = true;
            bool c = true;

            while(i < rs.size() && rs[i][0] == row){
                int s = rs[i][1];
                if(s >= 2 && s <= 5) a = false;
                if(s >= 6 && s <= 9) b = false;
                if(s >= 4 && s <= 7) c = false;
                i++;
            }
            if(a && b) ans += 2;
            else if(a || b || c) ans++;
        }

        int rsRow = 0;
        for(int i=0; i<rs.size();){
            rsRow++;
            int row = rs[i][0];
            while(i<rs.size() && rs[i][0] == row) i++;
        }
        ans += (n-rsRow)*2;
        return ans;
    }
};