class Solution {
public:
    int cntDays(string date){
        int m = stoi(date.substr(0, 2));
        int d = stoi(date.substr(3, 2));
        int day[12] = {31, 28 ,31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i=0; i<m-1; i++)
            d += day[i];
        return d;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int st = max(cntDays(arriveAlice), cntDays(arriveBob));
        int end = min(cntDays(leaveAlice), cntDays(leaveBob));
        return max(0, end-st+1);
    }
};