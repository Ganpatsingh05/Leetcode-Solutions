class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {


        sort(nums.begin(), nums.end()); 
        for (int i = 0; i < nums.size() && k>0; i++) {
            if (nums[i] < 0) { 
                nums[i] = -nums[i];
                k--;
            }
        }
        
        sort(nums.begin(), nums.end()); 
        if (k % 2 == 1) { 
            nums[0] = -nums[0];
        }
        
        return accumulate(nums.begin(), nums.end(), 0); 
    }
};
