class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        if(k > profits.size() && profits.size()==capital.size()) return 0;
        vector<pair<int,int>> maxp;
        priority_queue<int> pq;
        for(int i=0; i<capital.size(); i++){
            maxp.push_back(capital[i], profits[i]);
        }
        sort(capital.begin(), capital.end());
        for(int i=0; i<capital.size(); i++){
            if(capital[i] == w){
                w += profits[i];
                k--;
                capital[i] = -1;
            }
        }
    }
};
