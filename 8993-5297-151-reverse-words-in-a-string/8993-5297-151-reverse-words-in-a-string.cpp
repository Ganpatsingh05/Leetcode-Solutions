class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = n-1;
        string arr;

        while(i >= 0){
            while( i>=0 && s[i] == ' '){
                i--;
            }
            if(i<0){
                break;
            }
            int j = i;
            while( j >=0 && s[j] != ' '){
                j--;
            }
            if(!arr.empty()){
                arr += ' ';
            }
            arr += s.substr(j+1,i-j);
            i = j;
            
        }
        return arr;
    }
};