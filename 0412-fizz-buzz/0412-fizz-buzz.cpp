class Solution {
public:
    // void pro(int i, vector<string>& s){
    //     if(i < 1) return;
    //     if(i%3==0 && i%5==0)
    //     s.push_back("FizzBuzz");
    //     else if(i%3 == 0)
    //     s.push_back("Fizz");
    //     else if(i%5 == 0)
    //     s.push_back("Buzz");
    //     else
    //     s.push_back(to_string(i));
    //     return pro(i-1, s);
    // }

    vector<string> fizzBuzz(int n) {
        vector<string> s;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0)
            s.push_back("FizzBuzz");
            else if(i%3 == 0)
            s.push_back("Fizz");
            else if(i%5 == 0)
            s.push_back("Buzz");
            else
            s.push_back(to_string(i));
        }
        // pro(n, s);
        // reverse(s.begin(), s.end());
        return s;
    }
};