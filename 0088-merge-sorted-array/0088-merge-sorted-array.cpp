class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i=0;
            for(int j=m;j<m+n;j++){
                //arr[i] = nums1[i];
                nums1[j] = nums2[i];
                i++;
            }
            for(int i=0;i<m+n;i++){
                for(int j=0;j<m+n-i-1;j++){
                    if(nums1[j]>nums1[j+1]){
                        int temp=nums1[j];
                        nums1[j] = nums1[j+1];
                        nums1[j+1] = temp;
                    }
                }
            }
    }
};