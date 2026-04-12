class Solution {
public:
    string trafficSignal(int timer) {
        if(timer > 0 && timer < 30 || timer > 90)
            return "Invalid";
        if(timer == 0)
            return "Green";
        else if(timer == 30)
            return "Orange";
        else 
            return "Red";
    }
};