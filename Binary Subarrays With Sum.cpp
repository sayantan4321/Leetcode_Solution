class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int cnt=0;
        unordered_map<int, int>mpp;
        mpp[0]=1;
        int presum=0;
        for(int i=0; i<nums.size(); i++){
           presum+= nums[i];
           int remove= presum - k;
           cnt+= mpp[remove];
           mpp[presum]+= 1;
        } 
       return cnt;
        // for(int i=0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum += nums[j];
        //         if(sum == goal){
        //             cnt ++;
        //         }
        //     }
        // }
        //return cnt;
    }
};