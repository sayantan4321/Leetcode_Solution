class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) { 
        int n = score.size();
        unordered_map<int, int> mpp;

        for(int i=0; i<n; i++){
            mpp[score[i]] = i;
        }
        vector<string> answer(n);
        sort(begin(score), end(score), greater<int>());
        
        for(int i=0; i<n; i++){
           if(i==0){
            int ath = mpp[score[i]];
            answer[ath] = "Gold Medal";
           }
           else if(i==1){
            int ath = mpp[score[i]];
            answer[ath] = "Silver Medal";
           }
           else if(i==2){
            int ath = mpp[score[i]];
            answer[ath] = "Bronze Medal";
           }
           else{
            int ath = mpp[score[i]];
            answer[ath] = to_string(i+1);
           }
        }
        return answer;
    }
};
