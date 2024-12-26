class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int moves = 0;

        for (int i=0;i<nums.size();i++) {
            moves = moves + (nums[i] - min);
            }

        return moves;
    }
};