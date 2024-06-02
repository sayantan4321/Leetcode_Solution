class Solution {
public:
    int lowerBound(vector<int>& nums, int x){
        int low = -0, high = nums.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] >= x){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums), end(nums));
        
        for(int x=1; x<=n; x++){
            int cnt = lowerBound(nums, x);
            if(n-cnt == x) return x;
        }
        return -1;
    }
};
