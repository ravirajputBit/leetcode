class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int count = 0;
        int mi = s.size() / 2;

        for(int i=0; i<mi; i++){
            char char1 = s[i];
            char char2 = s[mi + i];
            if(vowels.count(char1)) count++;
            if(vowels.count(char2)) count--;
        }
        return count == 0;
    }
};