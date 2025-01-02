class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  
        vector<int> temp(nums.end() - k, nums.end());
        temp.insert(temp.end(), nums.begin(), nums.end() - k);
        nums = temp;
    }
};