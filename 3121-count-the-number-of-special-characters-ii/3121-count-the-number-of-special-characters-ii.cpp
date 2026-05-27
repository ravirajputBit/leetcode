class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();

        vector<int> lr(26, -1);
        vector<int> ur(26, -1);
        for(int i=0; i<n; i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                lr[word[i]-'a'] = i;
            }
            else if(word[i] >= 'A' && word[i] <= 'Z'){
                int idx = word[i]-'A';
                if(ur[idx] == -1){
                    ur[idx]  = i;
                }
            }
        }

        int ans = 0;
        for(int i=0; i<26; i++){
            if(lr[i] != -1 && ur[i] != -1 && lr[i] < ur[i]){
                ans++;
            } 
        }
        return ans;
    }
};