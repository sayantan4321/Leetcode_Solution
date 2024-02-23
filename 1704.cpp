class Solution {
public:
    bool vowel(char c){
        c=tolower(c);
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    bool halvesAreAlike(string s) {
        // int x=0,n=s.size();
        // for(int i=0;i<n/2;i++){
        //     if(vowel(s[i])) x++;
        //     if(vowel(s[n-i-1])) x--;
        // }
        // return x==0;

        int n= s.length();
        int i=0, j=n/2;
        int cntleft=0, cntright=0;
        while(i<n/2 && j<n){
            if(vowel(s[i])) cntleft++;
            if(vowel(s[j])) cntright++;
            i++;
            j++;
        }
        return cntleft==cntright;
    }
};