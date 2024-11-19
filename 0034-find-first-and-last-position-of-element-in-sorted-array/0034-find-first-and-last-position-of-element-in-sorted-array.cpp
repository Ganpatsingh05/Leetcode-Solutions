class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                index.push_back(i);
            }
        }
        vector<int> firstandlast;
        if( index.size()>0){
        firstandlast.push_back(index[0]);
        firstandlast.push_back(index[index.size()-1]);
        }
        else{
        firstandlast.push_back(-1);
        firstandlast.push_back(-1);
        }
        return firstandlast;
    }
};