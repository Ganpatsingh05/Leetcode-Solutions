class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j = 1; 
        int z = 0; 
        int Count = 0; 

        while (Count < k) {
            if (z < arr.size() && j == arr[z]) {
                z++;
            } 
            else {
                Count++;
                if (Count == k) {
                    return j;
                }
            }
            j++;
        }
        return -1; 
    }
};
