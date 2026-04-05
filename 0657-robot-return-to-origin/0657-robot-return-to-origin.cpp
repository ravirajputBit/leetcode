class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        if(n == 1) return false;

        int x = 0, y = 0;
        
        if(n%2 == 0){
            for(int i=0; i<n; i++){
                if(moves[i] == 'L' || moves[i] == 'R'){
                    if(moves[i] == 'R') x++;
                    else x--;
                }
                else{
                    if(moves[i] == 'U') y++;
                    else y--;
                }
            }
            return (x == 0 && y == 0);
        }
        else 
            return false;
    }
};