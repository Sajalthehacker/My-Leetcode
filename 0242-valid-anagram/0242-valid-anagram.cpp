class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        int n = s.size();
        map<char, int> mp;

        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }

        for(int i = 0; i < n; i++){
            if(mp[t[i]] == 0){
                return false;
            }
            mp[t[i]]--;
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > 0){
                return false;
            }
        }
        return true;
    }
};