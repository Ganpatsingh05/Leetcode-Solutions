class Solution {
public:
    int singleNumber(vector<int>& nums) {

    int unique =0;
    for(int i: nums){
        
        unique = unique ^ i;
        
    }
    return unique;

        return {};
    }
};