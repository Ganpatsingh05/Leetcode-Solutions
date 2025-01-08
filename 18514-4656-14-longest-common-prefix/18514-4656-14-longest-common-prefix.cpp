class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty()){
            return "";
        }
    
        string p = strs[0];
    
        for(int i = 1;i<strs.size();i++) {
            while(strs[i].find(p) != 0){

                p = p.substr(0,p.size() - 1);

                if (p.empty()){
                    return "";
                }
            }
        }
    
        return p;
    }
};