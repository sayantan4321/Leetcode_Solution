// BRUTE FORCE
class Solution {
public:
    bool isprime(int num){
        if (num <= 1)   return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
       return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int maxi = 0;
        for(int i=0; i<nums.size(); i++){
            if(isprime(nums[i])){
                for(int j = i+1; j<nums.size(); j++){
                     if(isprime(nums[j])){
                        int dis = abs(j-i);
                        maxi = max(maxi, dis);
                     }
                }
            }
        }
        return maxi;
    }
};
