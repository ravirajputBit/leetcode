class Solution {
public:
    void merge(vector<int>& nums, int st, int mid, int end){
        vector<int> temp(end-st+1);
        int left = st, right = mid+1;
        int idx = 0;
        while(left<=mid && right<=end){
            if(nums[left]<=nums[right]){
                temp[idx] = nums[left];
                left++, idx++;
            }
            else{
                temp[idx] = nums[right];
                right++, idx++;
            }
        }
        while(left<=mid){
            temp[idx] = nums[left];
            left++, idx++;
        }
        while(right<=end){
            temp[idx] = nums[right];
            right++, idx++;
        }
        int i = 0;
        while(st<=end){
            nums[st] = temp[i];
            st++, i++;
        }
    }
    void mergeSort(vector<int>& nums, int st, int end){
        if(st==end) return;
        int mid = st + (end-st)/2;
        mergeSort(nums, st, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, st, mid, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;
        mergeSort(nums, st, end);
        return nums;
    }
};