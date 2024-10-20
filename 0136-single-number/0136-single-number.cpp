class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     set<int>s;
    //      s.insert(nums.begin(), nums.end());

    // for (auto it = s.begin(); it != s.end(); ++it)
    //     cout << ' ' << *it;

    //     return 0;
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==0){
            return 0;
        }
        else{
            for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] ){
                    nums[i] = 0;
                    nums[j] = 0;
                }
            }
            }
        
            for(int k=0;k<nums.size();k++){
                if(nums[k]>0 || nums[k]<0){
                    //cout<<nums[k];
                    return nums[k];
               }
            }

        }
        return {};
    }
};