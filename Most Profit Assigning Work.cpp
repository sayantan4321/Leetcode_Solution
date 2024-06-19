// Approach -1 --> Binary Search

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       int totalProfit = 0;
       int n = difficulty.size();
       int m = worker.size();
       vector<pair<int, int>> vec;
       for(int i=0; i<n; i++){
         vec.push_back({difficulty[i], profit[i]});
       }
       sort(begin(vec), end(vec));

       //Pre-processing to find the maximum profit till index i at constant time
        for(int i = 1; i < vec.size(); i++) {
            vec[i].second = max(vec[i].second, vec[i-1].second);
        }

      // int l = 0, h = vec.size() - 1;
       for(int i=0; i<worker.size(); i++){
          int l = 0, h = vec.size() - 1;
          int capacity = worker[i];
          int maxProfit = 0;
          while(l <= h){
            int mid = (l+h)/2;
            if(vec[mid].first <= capacity){
                maxProfit = max(maxProfit, vec[mid].second); //Math.max(maxProfit, vec.get(mid)[1])
                l= mid+1;
            }
            else{
                h = mid-1;
            }
          }
          totalProfit += maxProfit;
       }
       return totalProfit;
    }
};
