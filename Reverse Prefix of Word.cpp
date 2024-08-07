class Solution {
public:
    string reversePrefix(string word, char ch) {
      int j = word.find(ch);
      if(ch == -1) return word;
      int i=0;
      while(i < j){
        swap(word[i], word[j]);
        i++;
        j--;
      }
      return word;
    }
};
