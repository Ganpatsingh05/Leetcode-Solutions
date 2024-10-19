class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        int k=0;
        int l=n;

        if(n>1){
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                arr[l-1]=0;
                l--;
            }
            if(nums[i]!=0){
                arr[k]=nums[i];
                k++;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
        }
        
    }
};