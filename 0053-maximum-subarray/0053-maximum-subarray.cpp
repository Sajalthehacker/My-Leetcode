class Solution {
public:
    // kadane's algorithm
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        
        int curSum = 0, maxSum = INT_MIN;
        for(int i = 0; i < n; i++){
            curSum = curSum + nums[i];
            maxSum = max(maxSum, curSum);
            if(curSum < 0){
                curSum = 0;
            }
        }

        return maxSum;
    }
};