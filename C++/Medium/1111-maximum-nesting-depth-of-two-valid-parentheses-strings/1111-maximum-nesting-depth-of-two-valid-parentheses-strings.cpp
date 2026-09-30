class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans;
        int cnt = 1;
        for(char ch : seq){
            if(ch == '('){
                cnt++;
                ans.push_back(cnt%2);
            }
            else{
                ans.push_back(cnt%2);
                cnt--;
            }
        }
        return ans;
    }
};