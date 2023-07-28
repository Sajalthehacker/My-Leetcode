class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        int n = s.size();
        int maxLen = 0;
        char curEle;
        
        while(right < n){
            curEle = s[right];
            if(mp.find(curEle) != mp.end()){
                left = max(left, mp[curEle] + 1);
            }
            mp[curEle] = right;
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};