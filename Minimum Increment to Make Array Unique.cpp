class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int moves = 0;
        
        for(int i=1; i<nums.size(); i++){
            // if(nums[i] = nums[i-1]){
            //     nums[i] = nums[i-1]+1;
            //     moves += 1;
            // }
            // else if(nums[i] < nums[i-1]){
            //     nums[i] = nums[i-1]+1;
            //     moves += (nums[i-1]-nums[i]+1);
            // }
            if(nums[i] <= nums[i-1]) {
                moves += (nums[i-1] - nums[i] + 1);
                nums[i] = nums[i-1]+1;
            }
        }
        return moves;
    }
};
