class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int can1 = INT_MAX, can2 = INT_MAX;
        int c1 = 0, c2 = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == can1){
                c1++;
            }
            else if(nums[i] == can2){
                c2++;
            }
            else if(c1 == 0){
                c1++;
                can1 = nums[i];
            }
            else if(c2 == 0){
                c2++;
                can2 = nums[i];
            }
            else{
                c1--;
                c2--;
            }
        }

        int freq1 = 0, freq2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == can1){
                freq1++;
            }
            else if(nums[i] == can2){
                freq2++;
            }
        }

        if(freq1 > n / 3){
            ans.push_back(can1);
        }
        if(freq2 > n / 3){
            ans.push_back(can2);
        }
        return ans;
    }
};