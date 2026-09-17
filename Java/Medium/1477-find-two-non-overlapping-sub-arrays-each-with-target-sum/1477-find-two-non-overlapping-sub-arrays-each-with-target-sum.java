class Solution {
    public int minSumOfLengths(int[] arr, int target) {
        int n = arr.length;
        int ans = n+1;
        int s = 0;
        int[] dp = new int[n+1];
        Arrays.fill(dp, n);
        for(int i=0, j=0; i<n; i++){
            s += arr[i];
            while(s > target)
                s -= arr[j++];
            dp[i+1] = dp[i];
            if(s == target){
                ans = Math.min(ans, i-j+1+dp[j]);
                dp[i+1] = Math.min(dp[i], i-j+1);
            }
        }
        return ans == n+1 ? -1:ans;
    }
}