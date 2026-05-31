class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long sum = 0;
        long long m = mass;
        for(int x : asteroids){
            sum += x;
            if(m >= x){
                m += x;
            }else break;
        }
        return sum < m ? true : false;
    }
};