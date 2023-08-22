class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        stack<pair<int, int> > stk;
        int n = intervals.size();
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++){
            if(stk.empty()){
                stk.push(make_pair(intervals[i][0], intervals[i][1]));
            }
            else{
                pair<int, int> temp = stk.top();
                if(temp.second >= intervals[i][0]){
                    stk.pop();
                    temp.second = max(temp.second, intervals[i][1]);
                    stk.push(temp);
                }
                else{
                    stk.push(make_pair(intervals[i][0], intervals[i][1]));
                }
            }
        }

        vector<int> res;
        while(!stk.empty()){
            pair<int, int> temp = stk.top();
            res.push_back(temp.first);
            res.push_back(temp.second);
            ans.push_back(res);
            res.clear();
            stk.pop();
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};