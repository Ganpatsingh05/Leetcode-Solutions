class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int count = 0;
        int n = ransomNote.length();
        int j = 0;

        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());

        for(int i=0;i<magazine.length();i++){
            if(magazine[i] == ransomNote[j]){
                count++;
                j++;
            }
        }

        if(count >= n){
            return true;
        }

        return false;
    }
};