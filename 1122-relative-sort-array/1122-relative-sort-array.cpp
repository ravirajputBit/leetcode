class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
        vector<int> ans;
        for(int i=0; i<a2.size(); i++){
            for(int j=0; j<a1.size(); j++){
                if(a2[i] == a1[j]){
                    ans.push_back(a1[j]);
                    a1[j] = -1;
                }
            }
        }
        sort(a1.begin(), a1.end());
        for(int i=0; i<a1.size(); i++){
            if(a1[i] != -1)
                ans.push_back(a1[i]);
        }
        return ans;
    }
};