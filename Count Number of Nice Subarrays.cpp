class Solution {
public:
    int cntofOdd(vector<int>& nums, int start, int end){
        int oddcnt = 0;
        for(int i=start; i<=end; i++){
            if(nums[i]%2 != 0){
                oddcnt++;
            }
        }
        return oddcnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnt = 0, n = nums.size();
        int i=0, j = 0;
        while(j < n){
            if(j-i >=(k-1) && i<=j){
                if(k == cntofOdd(nums, i, j)){
                    cnt++;
                }
                else if(cntofOdd(nums, i, j) > k){
                    i++;
                }
            }
            j++;
        }
        return cnt;
    }
};
