class Solution {
public:
    int minimumCost(vector<int>& cost) {

        sort(cost.begin(), cost.end(), [](int& a, int& b){
            return a > b;
        });
        
        int a = 0, sum = 0;
        for(int i=0; i<cost.size(); i++){
            if(a == 2){
                a = 0;
                continue;
            }
            else{
                a++;
                sum += cost[i];
            }
        }
        return sum;
    }
};