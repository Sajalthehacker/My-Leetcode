class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > nums.size() / 3){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};