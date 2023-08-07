class Solution {
public:
    void solve(vector<int> nums, vector<int>& temp, vector<vector<int>>& ans, vector<bool>& vis, int n, int ind){

        vis[ind] = true;
        temp.push_back(nums[ind]);

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                solve(nums, temp, ans, vis, n, i);
            }
        }

        if(temp.size() == n){
            ans.push_back(temp);
        }

        vis[ind] = false;
        temp.pop_back();
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> temp;

        for(int i = 0; i < n; i++){
            vector<bool> vis(n, false);
            solve(nums, temp, ans, vis, n, i); 
        }

        return ans;
    }
};