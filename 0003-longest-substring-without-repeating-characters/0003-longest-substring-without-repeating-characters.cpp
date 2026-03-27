class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0, right = 0, maxLn = 0;
        unordered_set<char> ans;


        while(right < n){
           if(ans.find(s[right]) == ans.end()){
               ans.insert(s[right]);
               maxLn = max(maxLn, right - left + 1);
               right++;
           } else{
               ans.erase(s[left]);
               left++;
           }
        }
        return maxLn;
    }
};