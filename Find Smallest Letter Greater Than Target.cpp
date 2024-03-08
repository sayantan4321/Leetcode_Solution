class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans=-1, low = 0, high = letters.size()-1;

        while(low <= high){
            int mid = (low+high)/2;

            if(letters[mid] > target){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans > -1 ? letters[ans] : letters[0];
    }
};