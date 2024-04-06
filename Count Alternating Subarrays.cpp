class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int i=0, j=1;
        long long cnt =1;
        
        while(j < nums.size()){
           if(nums[j-1] == nums[j]){
                i=j;
           }
           cnt += (j-i+1);
           j++;
        }
        return cnt;
    }
};