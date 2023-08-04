class Solution {
public:
    int solve(unordered_set<string> st, string s, int ind, vector<int>& dp){
        if(ind == s.size()){
            return 1;
        }

        if(dp[ind] != -1){
            return dp[ind];
        }

        string temp = "";
        for(int j = ind; j < s.size(); j++){
            temp = temp + s[j];
            if(st.find(temp) != st.end()){
                if(solve(st, s, j + 1, dp)){
                    dp[ind] = 1;
                    return dp[ind];
                }
            }
        }

        dp[ind] = 0;
        return dp[ind];
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        vector<int> dp(s.size(), -1);
        for(string str : wordDict){
            st.insert(str);
        }

        if(solve(st, s, 0, dp)){
            return true;
        }

        return false;
    }
};