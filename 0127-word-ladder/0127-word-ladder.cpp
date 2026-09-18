class Solution {
public:
    int ladderLength(string bW, string eW, vector<string>& wL) {
        unordered_set<string> s(wL.begin(), wL.end());
        queue<pair<string, int>> q;
        q.push(make_pair(bW, 1));
        s.erase(bW);
        while(!q.empty()){
            int l = q.front().second;
            string w = q.front().first;
            q.pop();
            if(w == eW) return l;
            for(int i=0; i<w.length(); i++){
                char org = w[i];
                for(char j='a'; j<='z'; j++){
                    w[i] = j;
                    if(s.find(w) != s.end()){
                        s.erase(w);
                        q.push(make_pair(w, l+1));
                    }
                }
                w[i] = org;
            }
        }
        return 0;
    }
};