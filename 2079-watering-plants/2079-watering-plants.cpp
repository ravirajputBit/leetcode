class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0;
        int val = capacity;
        for(int i=0; i<plants.size(); i++){
            if(val < plants[i]){
                steps += 2*i;   
                val = capacity;
            }
            val -= plants[i];
            steps++;  
        }
        return steps;
    }
};