class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();

        vector<int> C(n);
        unordered_set<int> sA, sB;

        for(int i=0; i<n; i++){
            sA.insert(A[i]);
            sB.insert(B[i]);

            int count = 0;
            for(int ele : sA){
                if(sB.count(ele))
                    count++;
            }
            C[i] = count;
        }
        return C;
    }
};