/* 
Approach - 1
Using Set and rechare with substing  
T.C. -> o(i) + o(word*i*i)
S.C. -> O(N) 
*/
    
class Solution {
public:
    string findroot(string &word, unordered_set<string> &st){
        for(int i=0; i<word.length(); i++){
            string root = word.substr(0, i);
            if(st.count(root)){
                return root;
            }
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(begin(dictionary), end(dictionary));

        stringstream ss(sentence);
        string word; // to  get the every word of the above string
        string res;
        while(getline(ss, word, ' ')) {
            res += findroot(word, st) + " ";
        }
        res.pop_back(); // to remove last extra space
        return res;
    }
};
