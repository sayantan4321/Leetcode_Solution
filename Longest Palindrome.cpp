class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length() == 1) return 1;
        unordered_map<char, int> mpp;
        int cnt = 0;
        bool hasOne = false;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        for(auto it : mpp){
            cnt += (it.second/2) * 2;
            // if(it.second % 2 == 0){
            //     cnt += (it.second/2) * 2;
            // }
            if(it.second % 2 == 1){
                hasOne = true;
            }
        }
        if(hasOne) cnt += 1;
        return cnt;
    }
};
