class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int left = 0, right = 0;
        int n = s.size();
        int maxLen = 0;
        char curEle;
        while(left <= right && right < n){
            curEle = s[right];
            if(st.find(curEle) == st.end()){
                st.insert(curEle);
                maxLen = max(maxLen, right- left + 1);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
                maxLen = max(maxLen, right- left + 1);
            }
        }

        return maxLen;
    }
};