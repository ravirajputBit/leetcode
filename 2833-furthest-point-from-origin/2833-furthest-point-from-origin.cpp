class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int unds = 0;
        
        for(char i : moves){
            if(i == 'L')
                left++;
            else  if(i == 'R')
                right++;
            else
                unds++;
        }
        return abs(left-right) + unds;
    }
};