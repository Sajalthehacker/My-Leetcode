class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int curPro = 1, n = nums.size();

        for(int i = 0; i < n; i++){
            curPro = curPro * nums[i];
            ans = max(ans, curPro);
            if(curPro == 0){
                curPro = 1;
            }
        }

        curPro = 1;

        for(int i = n - 1; i >= 0; i--){
            curPro = curPro * nums[i];
            ans = max(ans, curPro);
            if(curPro == 0){
                curPro = 1;
            }
        }

        return ans;
    }
};