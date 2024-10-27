class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int uniqueCount = 1;
        int maxAllowed = candyType.size() / 2;
    for(int i = 1; i < candyType.size() && uniqueCount < maxAllowed;++i)
            if (candyType[i] != candyType[i - 1])
                uniqueCount++;
        
        return uniqueCount;
    }
};