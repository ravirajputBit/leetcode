class Solution {
public:
    int findDelayedArrivalTime(int aT, int dT) {
        if(aT+dT == 24)
        return 0;

        if(aT+dT > 24)
        return aT+dT-24;

        return aT+dT;
    }
};