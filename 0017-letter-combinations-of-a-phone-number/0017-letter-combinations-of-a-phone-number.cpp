class Solution {
public:
    void solve(unordered_map<char, vector<char>> mp, string digits, string cur, vector<string> &ans, int ind){
        if(ind == digits.size()){
            ans.push_back(cur);
            return;
        }

        for(int i = 0; i < mp[digits[ind]].size(); i++){
            solve(mp, digits, cur + mp[digits[ind]][i], ans, ind + 1);
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits == ""){
            return ans;
        }
        unordered_map<char, vector<char>> mp;
        mp['2'].push_back('a');
        mp['2'].push_back('b');
        mp['2'].push_back('c');

        mp['3'].push_back('d');
        mp['3'].push_back('e');
        mp['3'].push_back('f');

        mp['4'].push_back('g');
        mp['4'].push_back('h');
        mp['4'].push_back('i');
        
        mp['5'].push_back('j');
        mp['5'].push_back('k');
        mp['5'].push_back('l');

        mp['6'].push_back('m');
        mp['6'].push_back('n');
        mp['6'].push_back('o');

        mp['7'].push_back('p');
        mp['7'].push_back('q');
        mp['7'].push_back('r');
        mp['7'].push_back('s');

        mp['8'].push_back('t');
        mp['8'].push_back('u');
        mp['8'].push_back('v');

        mp['9'].push_back('w');
        mp['9'].push_back('x');
        mp['9'].push_back('y');
        mp['9'].push_back('z');

        string cur = "";

        solve(mp, digits, cur, ans, 0);

        return ans;
    }
};