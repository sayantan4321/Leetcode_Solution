class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        ios_base::sync_with_stdio(0); // I/O Speed up
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        for(int i=0; i<arr.size(); i++){
            if(target[i] != arr[i]){
                return false;
            }
        }
        return true;
    }
};