class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> res;

        if(size < 4){
            return ans;
        }
        
        for(int i = 0; i < size - 3; i++){
            for(int j = i + 1; j < size - 2; j++){

                long long tempSum = static_cast<long long>(target) - (nums[i] + nums[j]);
                int k = j + 1;
                int m = size - 1;

                while(k < m){
                    if((nums[k] + nums[m]) == tempSum){
                        res.insert({nums[i], nums[j], nums[k], nums[m]});
                        k++;
                        m--;
                    }
                    else if((nums[k] + nums[m]) < tempSum){
                        k++;
                    }
                    else{
                        m--;
                    }
                }
            }
        }
        for(auto it : res){
            ans.push_back(it);
        }
        return ans;
    }
};
