class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt_one = count(s.begin(), s.end(), '1');
        int n = s.size();
        string res = string(n,'0');

        int j=0;
        while(cnt_one > 1){
            res[j] = '1';
            j++;
            cnt_one --;
        }
        res[n-1] = '1'; 
        return res;
    }
};