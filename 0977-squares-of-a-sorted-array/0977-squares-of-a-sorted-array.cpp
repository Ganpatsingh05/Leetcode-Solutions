class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            // int n = pow(nums[i],2);
            // arr.push_back(n);
            arr.push_back(nums[i]*nums[i]);
        }
        sort(arr.begin(),arr.end());

        return arr;
    }
};