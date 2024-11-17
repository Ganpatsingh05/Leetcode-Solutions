#include <vector>
#include <algorithm> // For std::min
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start = 0;
        int end = n-1;
        int max1 = 0;

        while(start<end){
            int area = min(height[start],height[end]) * (end - start);
            if(area > max1){
                max1 = area;
            }
            if(height[start] < height[end]){
                start++;
            } 
            else{
                end--;
            }
        }

        return max1;
    }
};
