class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int dist = 0;
        int i = 0;
        int j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(i > j){
                j++;
                continue;
            }
            if(nums1[i] <= nums2[j]){
                dist = max(dist, j-i);
                j++;
            }
            else
                i++;
                
        }
        return dist;
    }
};