class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> skipLength; // for internal brackets we need to from which index to index we need to rev
        string res;

        for (char char_s : s) { // O(N)
            if (char_s == '(') {
                skipLength.push(res.size());
            } 
            else if (char_s == ')') {
                int len = skipLength.top();
                skipLength.pop();
                reverse(res.begin() + len, res.end()); //O(N)
            } else {
                res.push_back(char_s);
            }
        }

        return res; // string(res.begin(), res.end());
    }
};
