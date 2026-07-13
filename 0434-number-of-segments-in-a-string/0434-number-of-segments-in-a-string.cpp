class Solution {
public:
    int countSegments(string s) {
        int cnt = 0;
        string w;
        stringstream ss(s);
        while(ss >> w){
            cnt++;
        }
        return cnt;
    }
};