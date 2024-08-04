class Solution {
public:
    string losingPlayer(int x, int y) {
       int winner = min(x, y/4);

       if(winner%2 == 1) return "Alice";
       else return "Bob";
    }
};