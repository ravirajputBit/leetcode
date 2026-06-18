class Solution {
public:
    double angleClock(int hour, int minutes) {
        double agl = abs(30*hour - 5.5*minutes);
        if(agl > 180)
            return  360-agl;
      
        return agl;
    }
};