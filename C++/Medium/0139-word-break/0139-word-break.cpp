class Node{
public:
    unordered_map<char, Node*> chld;
    bool eow;
    Node(){
        eow = false;
    }     
};

class Solution {
    Node* root;
    vector<int> dp;
public:
    Solution(){
        root = new Node();
    }
    void Insert(string key){
        Node* temp = root;
        for(int i=0; i<key.size(); i++){
            if(temp->chld.count(key[i])==0)
            temp->chld[key[i]] = new Node();
            temp = temp->chld[key[i]];
        }
        temp->eow = true;
    }
    bool search(string x){
        Node* temp = root;
        for(int i=0; i<x.size(); i++){
            if(temp->chld.count(x[i]))
            temp = temp->chld[x[i]];
            else
            return false;
        }
        return temp->eow;
    }
    bool helper(string s){
        if(s.size() == 0) return true;

        if(dp[s.size()] != -1) return dp[s.size()];

        for(int i=0; i<s.size(); i++){
            string fst = s.substr(0, i+1);
            string snd = s.substr(i+1);
            if(search(fst) && helper(snd))
                return dp[s.size()] = true;
        }
        return dp[s.size()] = false;
    }
    
    bool wordBreak(string s, vector<string>& wD) {
        // Solution sl;
        dp.assign(s.size()+1, -1);
        for(string x : wD)
        Insert(x);
        return helper(s);
    }
};
