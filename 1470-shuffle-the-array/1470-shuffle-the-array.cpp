class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>arr;
        int mid = nums.size()/2;
        
        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
            arr.push_back(nums[mid]);
            mid++;
        }

        return arr;
    }
};