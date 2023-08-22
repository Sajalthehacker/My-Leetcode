class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, j;
        int n = s.size();

        for(j = n - 1; j >= 0; j--){
            if(s[j] != ' '){
                break;
            }
        }

        for(i = j; i >= 0; i--){
            if(s[i] == ' '){
                break;
            }
        }

        return (j - i);
    }
};