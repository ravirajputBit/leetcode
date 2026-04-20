class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;
        int i = 0;
        while(i < n){
            if(colors[i] != colors[n-1]){
                ans = n-1-i;
                break;
            }
            i++;
        }
        int j = n-1;
        while(j > 0){
            if(colors[j] != colors[0]){
                ans = max(ans, j);
                break;
            }
            j--;
        }
        return ans;
    }
};